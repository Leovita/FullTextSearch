#ifndef java_lang_Character_H
#define java_lang_Character_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class CharSequence;
    namespace constant {
      class DynamicConstantDesc;
    }
    class Character;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Optional;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Character : public ::java::lang::Object {
     public:
      enum {
        mid_init$_97f8668422006638,
        mid_charCount_3c9bba330f083871,
        mid_charValue_6c956faefc706166,
        mid_codePointAt_9a7f8b7fc7b277ea,
        mid_codePointAt_04f1a2089f4fa806,
        mid_codePointAt_db543c1e894f3140,
        mid_codePointBefore_9a7f8b7fc7b277ea,
        mid_codePointBefore_04f1a2089f4fa806,
        mid_codePointBefore_db543c1e894f3140,
        mid_codePointCount_db543c1e894f3140,
        mid_codePointCount_5e65ec5fa412fd78,
        mid_codePointOf_3f230d713d7fd2b0,
        mid_compare_fe4455dac0822ed1,
        mid_compareTo_dee8b11ace71edf5,
        mid_describeConstable_d95173840d09a723,
        mid_digit_7a63c58fa38d543f,
        mid_digit_7f733b5d08bb5ec4,
        mid_equals_570b5248a6da3ef6,
        mid_forDigit_a7c613146bdbbdb8,
        mid_getDirectionality_b717c26a2b6bd25e,
        mid_getDirectionality_3b30672d0bff9ebb,
        mid_getName_cd8436557ab831f9,
        mid_getNumericValue_99c33562a336f6e9,
        mid_getNumericValue_3c9bba330f083871,
        mid_getType_99c33562a336f6e9,
        mid_getType_3c9bba330f083871,
        mid_hashCode_20fbf7565993c3d7,
        mid_hashCode_99c33562a336f6e9,
        mid_highSurrogate_92a13ce4196a7e69,
        mid_isAlphabetic_ae22d3a856ad56f1,
        mid_isBmpCodePoint_ae22d3a856ad56f1,
        mid_isDefined_4e84a8c37896b7c5,
        mid_isDefined_ae22d3a856ad56f1,
        mid_isDigit_4e84a8c37896b7c5,
        mid_isDigit_ae22d3a856ad56f1,
        mid_isEmoji_ae22d3a856ad56f1,
        mid_isEmojiComponent_ae22d3a856ad56f1,
        mid_isEmojiModifier_ae22d3a856ad56f1,
        mid_isEmojiModifierBase_ae22d3a856ad56f1,
        mid_isEmojiPresentation_ae22d3a856ad56f1,
        mid_isExtendedPictographic_ae22d3a856ad56f1,
        mid_isHighSurrogate_4e84a8c37896b7c5,
        mid_isISOControl_4e84a8c37896b7c5,
        mid_isISOControl_ae22d3a856ad56f1,
        mid_isIdentifierIgnorable_4e84a8c37896b7c5,
        mid_isIdentifierIgnorable_ae22d3a856ad56f1,
        mid_isIdeographic_ae22d3a856ad56f1,
        mid_isJavaIdentifierPart_4e84a8c37896b7c5,
        mid_isJavaIdentifierPart_ae22d3a856ad56f1,
        mid_isJavaIdentifierStart_4e84a8c37896b7c5,
        mid_isJavaIdentifierStart_ae22d3a856ad56f1,
        mid_isJavaLetter_4e84a8c37896b7c5,
        mid_isJavaLetterOrDigit_4e84a8c37896b7c5,
        mid_isLetter_4e84a8c37896b7c5,
        mid_isLetter_ae22d3a856ad56f1,
        mid_isLetterOrDigit_4e84a8c37896b7c5,
        mid_isLetterOrDigit_ae22d3a856ad56f1,
        mid_isLowSurrogate_4e84a8c37896b7c5,
        mid_isLowerCase_4e84a8c37896b7c5,
        mid_isLowerCase_ae22d3a856ad56f1,
        mid_isMirrored_4e84a8c37896b7c5,
        mid_isMirrored_ae22d3a856ad56f1,
        mid_isSpace_4e84a8c37896b7c5,
        mid_isSpaceChar_4e84a8c37896b7c5,
        mid_isSpaceChar_ae22d3a856ad56f1,
        mid_isSupplementaryCodePoint_ae22d3a856ad56f1,
        mid_isSurrogate_4e84a8c37896b7c5,
        mid_isSurrogatePair_3112d23797362bc1,
        mid_isTitleCase_4e84a8c37896b7c5,
        mid_isTitleCase_ae22d3a856ad56f1,
        mid_isUnicodeIdentifierPart_4e84a8c37896b7c5,
        mid_isUnicodeIdentifierPart_ae22d3a856ad56f1,
        mid_isUnicodeIdentifierStart_4e84a8c37896b7c5,
        mid_isUnicodeIdentifierStart_ae22d3a856ad56f1,
        mid_isUpperCase_4e84a8c37896b7c5,
        mid_isUpperCase_ae22d3a856ad56f1,
        mid_isValidCodePoint_ae22d3a856ad56f1,
        mid_isWhitespace_4e84a8c37896b7c5,
        mid_isWhitespace_ae22d3a856ad56f1,
        mid_lowSurrogate_92a13ce4196a7e69,
        mid_offsetByCodePoints_5e65ec5fa412fd78,
        mid_offsetByCodePoints_6d968bffef5926c9,
        mid_reverseBytes_37d3198655206162,
        mid_toChars_b99eaae8e7f3ab85,
        mid_toChars_6ed07a93f4404b5c,
        mid_toCodePoint_fe4455dac0822ed1,
        mid_toLowerCase_37d3198655206162,
        mid_toLowerCase_3c9bba330f083871,
        mid_toString_09a7afff1868fc5e,
        mid_toString_a72e49fe21aa75fa,
        mid_toString_cd8436557ab831f9,
        mid_toTitleCase_37d3198655206162,
        mid_toTitleCase_3c9bba330f083871,
        mid_toUpperCase_37d3198655206162,
        mid_toUpperCase_3c9bba330f083871,
        mid_valueOf_77d8e9ddc26e460e,
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
      ::java::util::Optional describeConstable() const;
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
