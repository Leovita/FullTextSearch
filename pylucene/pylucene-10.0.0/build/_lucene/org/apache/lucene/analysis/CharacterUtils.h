#ifndef org_apache_lucene_analysis_CharacterUtils_H
#define org_apache_lucene_analysis_CharacterUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharacterUtils$CharacterBuffer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharacterUtils : public ::java::lang::Object {
         public:
          enum {
            mid_fill_b2f61d04feadcb2d,
            mid_fill_b99c5a69006fcb09,
            mid_newCharacterBuffer_74ef880058924f8e,
            mid_toChars_54a33a3910606b52,
            mid_toCodePoints_f59eaddae0f5db8c,
            mid_toLowerCase_186bb5d1c1aec30c,
            mid_toUpperCase_186bb5d1c1aec30c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharacterUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharacterUtils(const CharacterUtils& obj) : ::java::lang::Object(obj) {}

          static jboolean fill(const ::org::apache::lucene::analysis::CharacterUtils$CharacterBuffer &, const ::java::io::Reader &);
          static jboolean fill(const ::org::apache::lucene::analysis::CharacterUtils$CharacterBuffer &, const ::java::io::Reader &, jint);
          static ::org::apache::lucene::analysis::CharacterUtils$CharacterBuffer newCharacterBuffer(jint);
          static jint toChars(const JArray< jint > &, jint, jint, const JArray< jchar > &, jint);
          static jint toCodePoints(const JArray< jchar > &, jint, jint, const JArray< jint > &, jint);
          static void toLowerCase(const JArray< jchar > &, jint, jint);
          static void toUpperCase(const JArray< jchar > &, jint, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharacterUtils);
        extern PyTypeObject *PY_TYPE(CharacterUtils);

        class t_CharacterUtils {
        public:
          PyObject_HEAD
          CharacterUtils object;
          static PyObject *wrap_Object(const CharacterUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
