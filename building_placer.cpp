--------------------------------------------------------------------------------------------------------------------------------
BUILDING PLACER (c++ pseudocode)
--------------------------------------------------------------------------------------------------------------------------------
place_block(){
turtle.place();
        turtle.left();
        turtle.forward();
        turtle.right();
}
reposition_corner(){
turtle.left();
turtle.forward();
turtle.right();
turtle.forward();
turtle.forward();
turtle.right();
}


main(){
        Cout << “specify dimensions” << endl;
L = cin;
W = cin;
H = cin;
for(int y = 0; y < H; y++){
for(int x = 0; x < L; x++){
        place_block();
}
reposition_corner();
for(int x = 0; x < W-1; x++){
        place_block();
}
reposition_corner();
for(int x = 0; x < L-1; x++){
        place_block();
}
reposition_corner();
for(int x = 0; x < W-2; x++){
        place_block();
}
turtle.left();
turtle.forward();
turtle.forward();
turtle.right();
turtle.forward();
turtle.right();
turtle.up();
}
//return to ground for retrieval
while(turtle.look_down() == “air”){
        turtle.down();
}




}//end main
--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------