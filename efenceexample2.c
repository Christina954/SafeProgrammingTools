int
main (int argc, char *argv[]) {
  char *str;
  str = (char *)malloc(sizeof(char) * 2); strcpy(str, "hi");
  free(str);
  char a = str[1]
  return 0; 
}
