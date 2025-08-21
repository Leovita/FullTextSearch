#ifndef org_apache_lucene_util_UnicodeUtil_H
#define org_apache_lucene_util_UnicodeUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class UnicodeUtil$UTF8CodePoint;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
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
            mid_UTF16toUTF8_e3974a0e68afabd7,
            mid_UTF16toUTF8_0b81cda3850ec12f,
            mid_UTF16toUTF8_7bdc384b0be608c0,
            mid_UTF8toUTF16_870af57c43db9dde,
            mid_UTF8toUTF16_7f772cfa046ad71d,
            mid_UTF8toUTF32_b166c1e08c9f31fd,
            mid_calcUTF16toUTF8Length_5e65ec5fa412fd78,
            mid_codePointAt_c1daa183d608430e,
            mid_codePointCount_5cda243a0bd46c4d,
            mid_maxUTF8Length_3c9bba330f083871,
            mid_newString_62b8835e97af3afb,
            mid_toHexString_cb0eb1432185fc94,
            mid_validUTF16String_7fa88c8af67956ed,
            mid_validUTF16String_67ffc14a188f0fdf,
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
