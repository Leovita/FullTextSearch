#ifndef org_apache_lucene_analysis_fa_PersianCharFilterFactory_H
#define org_apache_lucene_analysis_fa_PersianCharFilterFactory_H

#include "org/apache/lucene/analysis/CharFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Reader;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_f8966313249002a6,
              mid_normalize_f8966313249002a6,
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
