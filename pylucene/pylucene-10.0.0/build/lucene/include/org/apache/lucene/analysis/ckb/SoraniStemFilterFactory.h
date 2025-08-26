#ifndef org_apache_lucene_analysis_ckb_SoraniStemFilterFactory_H
#define org_apache_lucene_analysis_ckb_SoraniStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace ckb {
          class SoraniStemFilter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ckb {

          class SoraniStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_3aca12b83ee34c67,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SoraniStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SoraniStemFilterFactory(const SoraniStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            SoraniStemFilterFactory();
            SoraniStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ckb::SoraniStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
      namespace analysis {
        namespace ckb {
          extern PyType_Def PY_TYPE_DEF(SoraniStemFilterFactory);
          extern PyTypeObject *PY_TYPE(SoraniStemFilterFactory);

          class t_SoraniStemFilterFactory {
          public:
            PyObject_HEAD
            SoraniStemFilterFactory object;
            static PyObject *wrap_Object(const SoraniStemFilterFactory&);
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
