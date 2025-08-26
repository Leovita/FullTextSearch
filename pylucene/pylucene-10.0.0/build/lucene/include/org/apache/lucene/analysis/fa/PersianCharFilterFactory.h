#ifndef org_apache_lucene_analysis_fa_PersianCharFilterFactory_H
#define org_apache_lucene_analysis_fa_PersianCharFilterFactory_H

#include "org/apache/lucene/analysis/CharFilterFactory.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fa {

          class PersianCharFilterFactory : public ::org::apache::lucene::analysis::CharFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_e087cc3459c2aeac,
              mid_normalize_e087cc3459c2aeac,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PersianCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PersianCharFilterFactory(const PersianCharFilterFactory& obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            PersianCharFilterFactory();
            PersianCharFilterFactory(const ::java::util::Map &);

            ::java::io::Reader create(const ::java::io::Reader &) const;
            ::java::io::Reader normalize(const ::java::io::Reader &) const;
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
        namespace fa {
          extern PyType_Def PY_TYPE_DEF(PersianCharFilterFactory);
          extern PyTypeObject *PY_TYPE(PersianCharFilterFactory);

          class t_PersianCharFilterFactory {
          public:
            PyObject_HEAD
            PersianCharFilterFactory object;
            static PyObject *wrap_Object(const PersianCharFilterFactory&);
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
