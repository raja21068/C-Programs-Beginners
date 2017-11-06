#include &ltstdio.h>

/************************************************/
/* DEFINES */

#define FALSE 0
#define TRUE 1
#define N_POSITIONS 9
#define MAX_N_MOVES 4
#define NO_FLAGS 0
#define ON_SOLUTION_PATH 1
#define NO_SOLUTION 0
#define FOUND_SOLUTION 1
#define HOLE 0
#define NO_PIECE 255

/************************************************/
/* TYPEDEFS */

/* The state will be a vector of 9 integers
(stored in unsigned chars).
4 2 6
1 3 _
5 8 7
is represented as
{ 4, 2, 6, 1, 3, 0, 5, 8, 7}
*/

typedef unsigned char STATE[ N_POSITIONS ];

/* A node in the search tree: */

typedef struct node
{
    STATE state;
    unsigned char piece_moved;
    struct node *sibling;
    struct node *first_child;
    struct node *parent;
    int flags;
}
NODE;

/************************************************/
/* GLOBALS */

/* First, let's put the rules in a lookup table.
We index the table by where the hole is, and look
up which positions the hole can move to.
The square indices are
0 1 2
3 4 5
6 7 8
A -1 in an entry indicates that that position does not
have this many moves.
*/

int moves[ N_POSITIONS ][ MAX_N_MOVES ] =
{
    /* From 0: */  { 1, 3, -1, -1 },
    /* From 1: */  { 0, 2, 4, -1 },
    /* From 2: */  { 1, 5, -1, -1 },
    /* From 3: */  { 0, 4, 6, -1},
    /* From 4: */  { 1, 3, 5, 7},
    /* From 5: */  { 2, 4, 8, -1},
    /* From 6: */  { 3, 7, -1, -1},
    /* From 7: */  { 4, 6, 8, -1},
    /* From 8: */  { 5, 7, -1, -1}
};

/* We need to know what the solution should look like: */
int solution[ N_POSITIONS ] = { 1, 2, 3, 4, 5, 6, 7, 8, 0 };

int n_nodes = 0; /* Keep count of the number of nodes created. */

/************************************************/
/* MAIN */

main()
{
    NODE *search_tree, *solution;
    NODE *malloc_node();
    int depth;

    /*
  printf( "A node is %d bytes\n", sizeof( NODE ) );
  */

    search_tree = malloc_node();

    read_initial_state( search_tree->state );
    for( depth = 1; depth state[i] = i;
    node->piece_moved = NO_PIECE;
    node->sibling = NULL;
    node->first_child = NULL;
    node->parent = NULL;
    node->flags = NO_FLAGS;

    n_nodes++;
    return node;
}

/************************************************/

read_initial_state( state )
STATE state;
{
    int i;
    int value;
    int repeats[N_POSITIONS];

    printf( "Please type in the initial position of the squares\n" );
    printf( "Give each row from top to bottom in left to right order\n" );
    for( i = 0; i  8 )
    {
        fprintf( stderr,
        "Illegal value %d in position %d, values must between 0 and 8.\n",
        value, i );
        exit( -1 );
    }
    if ( repeats[value] > 0 )
    {
        fprintf( stderr, "Duplicate value %d in position %d.\n", value, i );
        exit( -1 );
    }
    repeats[value] = 1;
    state[i] = (unsigned char) value; /* Do type conversion */
}
printf( "Input read:\n" );
print_board( state );
}

/************************************************/

print_board( state )
STATE state;
{
    printf( "%d %d %d\n", state[0], state[1], state[2] );
    printf( "%d %d %d\n", state[3], state[4], state[5] );
    printf( "%d %d %d\n", state[6], state[7], state[8] );
}

/************************************************/
/* Recursive version: Beware of stack overflow */

expand_search_tree_by_one( node )
NODE *node;
{

    if ( node == NULL )
    {
        fprintf( stderr, "Consistency check 1 failed\n" );
        exit( -1 );
    }
    if ( node->first_child == NULL )
    generate_moves( node );
    else
    expand_search_tree_by_one( node->first_child );

    /* Propagate solution */
    if ( on_solution_path( node ) && node->parent != NULL )
    {
        node->parent->flags |= ON_SOLUTION_PATH;
        return;
    }

    if ( node->sibling != NULL )
    expand_search_tree_by_one( node->sibling );
}

/************************************************/

generate_moves( node )
NODE *node;
{
    NODE *make_move();
    NODE *child;
    int i;

    child = make_move( node, 0 );
    node->first_child = child;
    if ( is_solution( child ) )
    {
        node->flags |= ON_SOLUTION_PATH;
        return FOUND_SOLUTION;
    }
    for( i = 1; i sibling = make_move( node, i );
    if ( child->sibling == NULL )
    return NO_SOLUTION;
    if ( is_solution( child->sibling ) )
    {
        node->flags |= ON_SOLUTION_PATH;
        return FOUND_SOLUTION;
    }
    child = child->sibling;
}
return NO_SOLUTION;
}

/************************************************/

NODE *make_move( node, index )
NODE *node;
int index;
{
    int i, hole_position, piece_position;
    NODE *result;

    /* Find hole */
    for( i = 0; i state[i] == HOLE )
    break;
}
hole_position = i;
piece_position = moves[hole_position][index];
if ( piece_position parent = node;
for( i = 0; i state[i] = node->state[i];
}
/* Swap hole and other piece. */
result->state[hole_position] = node->state[piece_position];
result->state[piece_position] = node->state[hole_position];
result->piece_moved = node->state[piece_position];

/*
  printf( "From\n" );
  print_board( node->state );
  printf( "Generating\n" );
  print_board( result->state );
  */

return result;
}

/************************************************/

is_solution( node )
NODE *node;
{
    int i;

    for( i = 0; i state[i] != solution[i] )
    return FALSE;
}
node->flags |= ON_SOLUTION_PATH;
return TRUE;
}

/************************************************/

on_solution_path( node )
NODE *node;
{
    if ( ( node->flags & ON_SOLUTION_PATH ) == 0 )
    return FALSE;
    else
    return TRUE;
}

/************************************************/

print_out_solution( node )
NODE *node;
{
    if ( node == NULL )
    return;
    if ( on_solution_path( node ) )
    {
        if ( node->piece_moved != NO_PIECE )
        {
            printf( "Piece %d moved.\n", node->piece_moved );
            print_board( node );
        }
        else
        {
            printf( "Starting postion:\n" );
            print_board( node );
        }
        print_out_solution( node->first_child );
    }
    else
    print_out_solution( node->sibling );
}
