#ifndef org_apache_lucene_codecs_lucene95_OrdToDocDISIReaderConfiguration_H
#define org_apache_lucene_codecs_lucene95_OrdToDocDISIReaderConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class DirectMonotonicReader;
        }
      }
      namespace codecs {
        namespace lucene90 {
          class IndexedDISI;
        }
        namespace lucene95 {
          class OrdToDocDISIReaderConfiguration;
        }
      }
      namespace index {
        class DocsWithFieldSet;
      }
      namespace store {
        class IndexOutput;
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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
              mid_fromStoredMeta_1e2203a451440805,
              mid_getDirectMonotonicReader_18a6f4123b0e5d93,
              mid_getIndexedDISI_b94b99c665c18a87,
              mid_isDense_947277eca0748c4e,
              mid_isEmpty_947277eca0748c4e,
              mid_writeStoredMeta_36e3900eb69a52ef,
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
