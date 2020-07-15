#include "URLEncoding.h"

String urlEncode(String source) {
  String encodedString = "";
  for (int i = 0; i < source.length(); i++) {
    char c = source.charAt(i);
    if (isAlphaNumeric(c)) {
      encodedString += c;
    } else if (c == ' ') {
      encodedString += "+";
    } else {
      encodedString += String("%") + String(((int)c), HEX);
    }
  }
  return encodedString;
}

String urlDecode(String source) {
  String decodedString = "";
  for (int i = 0; i < source.length(); i++) {
    char c = source.charAt(i);
    if (c == '%') {
      String codeChars = source.substring(i+1, i+3);
      int code = (int) strtol(codeChars.c_str(), 0, 16);
      decodedString += ((char) code);
      i += 2;
    } else if (c == '+') {
      decodedString += " ";
    } else {
      decodedString += c;
    }    
  }
  return decodedString;
}
