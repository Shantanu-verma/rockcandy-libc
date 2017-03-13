// Done condition check in return of function
// Added toupper() and tolower()

long long islower(long long c) {

  return (c > 96 && c < 123);
}

long long isupper(long long c) {

  return ((c > 64) && (c < 91));
}

long long isalpha(long long c) {

  return (islower(c) || isupper(c));
}

long long iscntrl(long long c) {

  return (c < 32 || c == 127);
}

long long isdigit(long long c) {

  return ((c > 47) && (c < 58));
}

long long isalnum(long long c) {

  return (isdigit(c) || isalpha(c));
}

long long ispunct(long long c) {
  if ((c > 32) && (c < 48)) {
    return 1;
  } else if ((c > 57) && (c < 65)) {
    return 1;
  } else if ((c > 90) && (c < 97)) {
    return 1;
  } else if ((c > 122) && (c < 127)) {
    return 1;
  }
  return 0;
}

long long isgraph(long long c) {

  return (isalnum(c) || ispunct(c));
}

long long isspace(long long c) {
  switch (c) {
  case 0x20:
  case 0x09:
  case 0x0A:
  case 0x0B:
  case 0x0C:
  case 0x0D:
    return 1;
  default:
    return 0;
  }
}

long long isprint(long long c) {

  return (isgraph(c) || isspace(c));
}

long long isxdigit(long long c) {
  if (isdigit(c)) {
    return 1;
  } else if ((c > 64) && (c < 71)) {
    return 1;
  } else if ((c > 96) && (c < 103)) {
    return 1;
  }
  return 0;
}
int tolower(int c) {
  if (islower(c))
    return c;
  else
    return (c + 32);
}
int toupper(int c) {
  if (isupper(c))
    return c;
  else
    return (c - 32);
}
