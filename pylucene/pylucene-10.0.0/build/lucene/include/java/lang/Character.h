#ifndef java_lang_Character_H
#define java_lang_Character_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class CharSequence;
    class Character;
    class Comparable;
  }
  namespace util {
    class Optional;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Character : public ::java::lang::Object {
     public:
      enum {
        mid_init$_121fb0d25559975f,
        mid_charCount_a3904e10f5bb9437,
        mid_charValue_15a06771db8cb866,
        mid_codePointAt_7146aefdd22b4b29,
        mid_codePointAt_a16700a6df5b8a5f,
        mid_codePointAt_872baf22ed11fbaa,
        mid_codePointBefore_7146aefdd22b4b29,
        mid_codePointBefore_a16700a6df5b8a5f,
        mid_codePointBefore_872baf22ed11fbaa,
        mid_codePointCount_872baf22ed11fbaa,
        mid_codePointCount_320c03fee8b6e65b,
        mid_codePointOf_fa2a6f298bd618ab,
        mid_compare_46b54b5377e5f897,
        mid_compareTo_0e3ea657f8328e8f,
        mid_digit_d99fd0db03e88b90,
        mid_digit_7f27cf81a85a97e9,
        mid_equals_00d17418847797d4,
        mid_forDigit_502d4d1769344433,
        mid_getDirectionality_506402600b0c5fc4,
        mid_getDirectionality_9e902c8fd52d5208,
        mid_getName_0da8f0b89b1e9a22,
        mid_getNumericValue_71dc1db9b5187263,
        mid_getNumericValue_a3904e10f5bb9437,
        mid_getType_71dc1db9b5187263,
        mid_getType_a3904e10f5bb9437,
        mid_hashCode_bd89ce15dad49192,
        mid_hashCode_71dc1db9b5187263,
        mid_highSurrogate_bc94dd98365f92fb,
        mid_isAlphabetic_a8281eb3b9d9672d,
        mid_isBmpCodePoint_a8281eb3b9d9672d,
        mid_isDefined_96a1e5bdb33dde4e,
        mid_isDefined_a8281eb3b9d9672d,
        mid_isDigit_96a1e5bdb33dde4e,
        mid_isDigit_a8281eb3b9d9672d,
        mid_isEmoji_a8281eb3b9d9672d,
        mid_isEmojiComponent_a8281eb3b9d9672d,
        mid_isEmojiModifier_a8281eb3b9d9672d,
        mid_isEmojiModifierBase_a8281eb3b9d9672d,
        mid_isEmojiPresentation_a8281eb3b9d9672d,
        mid_isExtendedPictographic_a8281eb3b9d9672d,
        mid_isHighSurrogate_96a1e5bdb33dde4e,
        mid_isISOControl_96a1e5bdb33dde4e,
        mid_isISOControl_a8281eb3b9d9672d,
        mid_isIdentifierIgnorable_96a1e5bdb33dde4e,
        mid_isIdentifierIgnorable_a8281eb3b9d9672d,
        mid_isIdeographic_a8281eb3b9d9672d,
        mid_isJavaIdentifierPart_96a1e5bdb33dde4e,
        mid_isJavaIdentifierPart_a8281eb3b9d9672d,
        mid_isJavaIdentifierStart_96a1e5bdb33dde4e,
        mid_isJavaIdentifierStart_a8281eb3b9d9672d,
        mid_isJavaLetter_96a1e5bdb33dde4e,
        mid_isJavaLetterOrDigit_96a1e5bdb33dde4e,
        mid_isLetter_96a1e5bdb33dde4e,
        mid_isLetter_a8281eb3b9d9672d,
        mid_isLetterOrDigit_96a1e5bdb33dde4e,
        mid_isLetterOrDigit_a8281eb3b9d9672d,
        mid_isLowSurrogate_96a1e5bdb33dde4e,
        mid_isLowerCase_96a1e5bdb33dde4e,
        mid_isLowerCase_a8281eb3b9d9672d,
        mid_isMirrored_96a1e5bdb33dde4e,
        mid_isMirrored_a8281eb3b9d9672d,
        mid_isSpace_96a1e5bdb33dde4e,
        mid_isSpaceChar_96a1e5bdb33dde4e,
        mid_isSpaceChar_a8281eb3b9d9672d,
        mid_isSupplementaryCodePoint_a8281eb3b9d9672d,
        mid_isSurrogate_96a1e5bdb33dde4e,
        mid_isSurrogatePair_237361e08a273ff0,
        mid_isTitleCase_96a1e5bdb33dde4e,
        mid_isTitleCase_a8281eb3b9d9672d,
        mid_isUnicodeIdentifierPart_96a1e5bdb33dde4e,
        mid_isUnicodeIdentifierPart_a8281eb3b9d9672d,
        mid_isUnicodeIdentifierStart_96a1e5bdb33dde4e,
        mid_isUnicodeIdentifierStart_a8281eb3b9d9672d,
        mid_isUpperCase_96a1e5bdb33dde4e,
        mid_isUpperCase_a8281eb3b9d9672d,
        mid_isValidCodePoint_a8281eb3b9d9672d,
        mid_isWhitespace_96a1e5bdb33dde4e,
        mid_isWhitespace_a8281eb3b9d9672d,
        mid_lowSurrogate_bc94dd98365f92fb,
        mid_offsetByCodePoints_320c03fee8b6e65b,
        mid_offsetByCodePoints_15b99258be761be2,
        mid_reverseBytes_7906d8bb50c3bcd1,
        mid_toChars_25bf44068950f64b,
        mid_toChars_63957a72d3499c34,
        mid_toCodePoint_46b54b5377e5f897,
        mid_toLowerCase_7906d8bb50c3bcd1,
        mid_toLowerCase_a3904e10f5bb9437,
        mid_toString_e7df854526d67fa3,
        mid_toString_6923855d95beafa0,
        mid_toString_0da8f0b89b1e9a22,
        mid_toTitleCase_7906d8bb50c3bcd1,
        mid_toTitleCase_a3904e10f5bb9437,
        mid_toUpperCase_7906d8bb50c3bcd1,
        mid_toUpperCase_a3904e10f5bb9437,
        mid_valueOf_19c4b34039da4baf,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Character(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Character(const Character& obj) : ::java::lang::Object(obj) {}

      static jint BYTES;
      static jbyte COMBINING_SPACING_MARK;
      static jbyte CONNECTOR_PUNCTUATION;
      static jbyte CONTROL;
      static jbyte CURRENCY_SYMBOL;
      static jbyte DASH_PUNCTUATION;
      static jbyte DECIMAL_DIGIT_NUMBER;
      static jbyte DIRECTIONALITY_ARABIC_NUMBER;
      static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL;
      static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
      static jbyte DIRECTIONALITY_FIRST_STRONG_ISOLATE;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
      static jbyte DIRECTIONALITY_NONSPACING_MARK;
      static jbyte DIRECTIONALITY_OTHER_NEUTRALS;
      static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
      static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR;
      static jbyte DIRECTIONALITY_UNDEFINED;
      static jbyte DIRECTIONALITY_WHITESPACE;
      static jbyte ENCLOSING_MARK;
      static jbyte END_PUNCTUATION;
      static jbyte FINAL_QUOTE_PUNCTUATION;
      static jbyte FORMAT;
      static jbyte INITIAL_QUOTE_PUNCTUATION;
      static jbyte LETTER_NUMBER;
      static jbyte LINE_SEPARATOR;
      static jbyte LOWERCASE_LETTER;
      static jbyte MATH_SYMBOL;
      static jint MAX_CODE_POINT;
      static jchar MAX_HIGH_SURROGATE;
      static jchar MAX_LOW_SURROGATE;
      static jint MAX_RADIX;
      static jchar MAX_SURROGATE;
      static jchar MAX_VALUE;
      static jint MIN_CODE_POINT;
      static jchar MIN_HIGH_SURROGATE;
      static jchar MIN_LOW_SURROGATE;
      static jint MIN_RADIX;
      static jint MIN_SUPPLEMENTARY_CODE_POINT;
      static jchar MIN_SURROGATE;
      static jchar MIN_VALUE;
      static jbyte MODIFIER_LETTER;
      static jbyte MODIFIER_SYMBOL;
      static jbyte NON_SPACING_MARK;
      static jbyte OTHER_LETTER;
      static jbyte OTHER_NUMBER;
      static jbyte OTHER_PUNCTUATION;
      static jbyte OTHER_SYMBOL;
      static jbyte PARAGRAPH_SEPARATOR;
      static jbyte PRIVATE_USE;
      static jint SIZE;
      static jbyte SPACE_SEPARATOR;
      static jbyte START_PUNCTUATION;
      static jbyte SURROGATE;
      static jbyte TITLECASE_LETTER;
      static ::java::lang::Class *TYPE;
      static jbyte UNASSIGNED;
      static jbyte UPPERCASE_LETTER;

      Character(jchar);

      static jint charCount(jint);
      jchar charValue() const;
      static jint codePointAt(const JArray< jchar > &, jint);
      static jint codePointAt(const ::java::lang::CharSequence &, jint);
      static jint codePointAt(const JArray< jchar > &, jint, jint);
      static jint codePointBefore(const JArray< jchar > &, jint);
      static jint codePointBefore(const ::java::lang::CharSequence &, jint);
      static jint codePointBefore(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const ::java::lang::CharSequence &, jint, jint);
      static jint codePointOf(const ::java::lang::String &);
      static jint compare(jchar, jchar);
      jint compareTo(const Character &) const;
      static jint digit(jchar, jint);
      static jint digit(jint, jint);
      jboolean equals(const ::java::lang::Object &) const;
      static jchar forDigit(jint, jint);
      static jbyte getDirectionality(jchar);
      static jbyte getDirectionality(jint);
      static ::java::lang::String getName(jint);
      static jint getNumericValue(jchar);
      static jint getNumericValue(jint);
      static jint getType(jchar);
      static jint getType(jint);
      jint hashCode() const;
      static jint hashCode(jchar);
      static jchar highSurrogate(jint);
      static jboolean isAlphabetic(jint);
      static jboolean isBmpCodePoint(jint);
      static jboolean isDefined(jchar);
      static jboolean isDefined(jint);
      static jboolean isDigit(jchar);
      static jboolean isDigit(jint);
      static jboolean isEmoji(jint);
      static jboolean isEmojiComponent(jint);
      static jboolean isEmojiModifier(jint);
      static jboolean isEmojiModifierBase(jint);
      static jboolean isEmojiPresentation(jint);
      static jboolean isExtendedPictographic(jint);
      static jboolean isHighSurrogate(jchar);
      static jboolean isISOControl(jchar);
      static jboolean isISOControl(jint);
      static jboolean isIdentifierIgnorable(jchar);
      static jboolean isIdentifierIgnorable(jint);
      static jboolean isIdeographic(jint);
      static jboolean isJavaIdentifierPart(jchar);
      static jboolean isJavaIdentifierPart(jint);
      static jboolean isJavaIdentifierStart(jchar);
      static jboolean isJavaIdentifierStart(jint);
      static jboolean isJavaLetter(jchar);
      static jboolean isJavaLetterOrDigit(jchar);
      static jboolean isLetter(jchar);
      static jboolean isLetter(jint);
      static jboolean isLetterOrDigit(jchar);
      static jboolean isLetterOrDigit(jint);
      static jboolean isLowSurrogate(jchar);
      static jboolean isLowerCase(jchar);
      static jboolean isLowerCase(jint);
      static jboolean isMirrored(jchar);
      static jboolean isMirrored(jint);
      static jboolean isSpace(jchar);
      static jboolean isSpaceChar(jchar);
      static jboolean isSpaceChar(jint);
      static jboolean isSupplementaryCodePoint(jint);
      static jboolean isSurrogate(jchar);
      static jboolean isSurrogatePair(jchar, jchar);
      static jboolean isTitleCase(jchar);
      static jboolean isTitleCase(jint);
      static jboolean isUnicodeIdentifierPart(jchar);
      static jboolean isUnicodeIdentifierPart(jint);
      static jboolean isUnicodeIdentifierStart(jchar);
      static jboolean isUnicodeIdentifierStart(jint);
      static jboolean isUpperCase(jchar);
      static jboolean isUpperCase(jint);
      static jboolean isValidCodePoint(jint);
      static jboolean isWhitespace(jchar);
      static jboolean isWhitespace(jint);
      static jchar lowSurrogate(jint);
      static jint offsetByCodePoints(const ::java::lang::CharSequence &, jint, jint);
      static jint offsetByCodePoints(const JArray< jchar > &, jint, jint, jint, jint);
      static jchar reverseBytes(jchar);
      static JArray< jchar > toChars(jint);
      static jint toChars(jint, const JArray< jchar > &, jint);
      static jint toCodePoint(jchar, jchar);
      static jchar toLowerCase(jchar);
      static jint toLowerCase(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jchar);
      static ::java::lang::String toString(jint);
      static jchar toTitleCase(jchar);
      static jint toTitleCase(jint);
      static jchar toUpperCase(jchar);
      static jint toUpperCase(jint);
      static Character valueOf(jchar);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Character);
    extern PyTypeObject *PY_TYPE(Character);

    class t_Character {
    public:
      PyObject_HEAD
      Character object;
      static PyObject *wrap_Object(const Character&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
