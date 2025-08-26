#ifndef org_apache_lucene_codecs_lucene95_OrdToDocDISIReaderConfiguration_H
#define org_apache_lucene_codecs_lucene95_OrdToDocDISIReaderConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          class IndexedDISI;
        }
        namespace lucene95 {
          class OrdToDocDISIReaderConfiguration;
        }
      }
      namespace store {
        class IndexOutput;
        class IndexInput;
      }
      namespace index {
        class DocsWithFieldSet;
      }
      namespace util {
        namespace packed {
          class DirectMonotonicReader;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene95 {

          class OrdToDocDISIReaderConfiguration : public ::java::lang::Object {
           public:
            enum {
              mid_fromStoredMeta_690f87c1aa83ec97,
              mid_getDirectMonotonicReader_16e0312eb072209e,
              mid_getIndexedDISI_bd710eeaf86b24a7,
              mid_isDense_9aa4f33e82ea333f,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_writeStoredMeta_0efddd0312aa37e3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdToDocDISIReaderConfiguration(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdToDocDISIReaderConfiguration(const OrdToDocDISIReaderConfiguration& obj) : ::java::lang::Object(obj) {}

            static OrdToDocDISIReaderConfiguration fromStoredMeta(const ::org::apache::lucene::store::IndexInput &, jint);
            ::org::apache::lucene::util::packed::DirectMonotonicReader getDirectMonotonicReader(const ::org::apache::lucene::store::IndexInput &) const;
            ::org::apache::lucene::codecs::lucene90::IndexedDISI getIndexedDISI(const ::org::apache::lucene::store::IndexInput &) const;
            jboolean isDense() const;
            jboolean isEmpty() const;
            static void writeStoredMeta(jint, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, jint, jint, const ::org::apache::lucene::index::DocsWithFieldSet &);
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
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(OrdToDocDISIReaderConfiguration);
          extern PyTypeObject *PY_TYPE(OrdToDocDISIReaderConfiguration);

          class t_OrdToDocDISIReaderConfiguration {
          public:
            PyObject_HEAD
            OrdToDocDISIReaderConfiguration object;
            static PyObject *wrap_Object(const OrdToDocDISIReaderConfiguration&);
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
