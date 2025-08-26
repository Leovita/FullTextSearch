#ifndef org_apache_lucene_codecs_lucene90_Lucene90TermVectorsFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90TermVectorsFormat_H

#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingTermVectorsFormat.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {

          class Lucene90TermVectorsFormat : public ::org::apache::lucene::codecs::lucene90::compressing::Lucene90CompressingTermVectorsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90TermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::lucene90::compressing::Lucene90CompressingTermVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90TermVectorsFormat(const Lucene90TermVectorsFormat& obj) : ::org::apache::lucene::codecs::lucene90::compressing::Lucene90CompressingTermVectorsFormat(obj) {}

            Lucene90TermVectorsFormat();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90TermVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene90TermVectorsFormat);

          class t_Lucene90TermVectorsFormat {
          public:
            PyObject_HEAD
            Lucene90TermVectorsFormat object;
            static PyObject *wrap_Object(const Lucene90TermVectorsFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
