#ifndef org_apache_lucene_util_UnicodeUtil_H
#define org_apache_lucene_util_UnicodeUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class UnicodeUtil$UTF8CodePoint;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class UnicodeUtil : public ::java::lang::Object {
         public:
          enum {
            mid_UTF16toUTF8_6e0cfefba3c1a41d,
            mid_UTF16toUTF8_3a5d6852ab296af7,
            mid_UTF16toUTF8_2ca222e3e34637da,
            mid_UTF8toUTF16_5c1ebcc782019fe5,
            mid_UTF8toUTF16_38e59b69865a1d21,
            mid_UTF8toUTF32_448dafdc28a1c4da,
            mid_calcUTF16toUTF8Length_320c03fee8b6e65b,
            mid_codePointAt_77c1c4a34221249a,
            mid_codePointCount_59a6eaf88a8be404,
            mid_maxUTF8Length_a3904e10f5bb9437,
            mid_newString_7f75cf6f134e011e,
            mid_toHexString_fef9c036acf290a9,
            mid_validUTF16String_966cbeda474fd26b,
            mid_validUTF16String_bdbbfc80c971dbfc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnicodeUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnicodeUtil(const UnicodeUtil& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::BytesRef *BIG_TERM;
          static jint MAX_UTF8_BYTES_PER_CHAR;
          static jint UNI_REPLACEMENT_CHAR;
          static jint UNI_SUR_HIGH_END;
          static jint UNI_SUR_HIGH_START;
          static jint UNI_SUR_LOW_END;
          static jint UNI_SUR_LOW_START;

          static jint UTF16toUTF8(const JArray< jchar > &, jint, jint, const JArray< jbyte > &);
          static jint UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const JArray< jbyte > &);
          static jint UTF16toUTF8(const ::java::lang::CharSequence &, jint, jint, const JArray< jbyte > &, jint);
          static jint UTF8toUTF16(const ::org::apache::lucene::util::BytesRef &, const JArray< jchar > &);
          static jint UTF8toUTF16(const JArray< jbyte > &, jint, jint, const JArray< jchar > &);
          static jint UTF8toUTF32(const ::org::apache::lucene::util::BytesRef &, const JArray< jint > &);
          static jint calcUTF16toUTF8Length(const ::java::lang::CharSequence &, jint, jint);
          static ::org::apache::lucene::util::UnicodeUtil$UTF8CodePoint codePointAt(const JArray< jbyte > &, jint, const ::org::apache::lucene::util::UnicodeUtil$UTF8CodePoint &);
          static jint codePointCount(const ::org::apache::lucene::util::BytesRef &);
          static jint maxUTF8Length(jint);
          static ::java::lang::String newString(const JArray< jint > &, jint, jint);
          static ::java::lang::String toHexString(const ::java::lang::String &);
          static jboolean validUTF16String(const ::java::lang::CharSequence &);
          static jboolean validUTF16String(const JArray< jchar > &, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(UnicodeUtil);
        extern PyTypeObject *PY_TYPE(UnicodeUtil);

        class t_UnicodeUtil {
        public:
          PyObject_HEAD
          UnicodeUtil object;
          static PyObject *wrap_Object(const UnicodeUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
