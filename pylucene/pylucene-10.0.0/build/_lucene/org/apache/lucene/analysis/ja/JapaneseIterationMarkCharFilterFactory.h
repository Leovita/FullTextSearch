#ifndef org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilterFactory_H
#define org_apache_lucene_analysis_ja_JapaneseIterationMarkCharFilterFactory_H

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
        namespace ja {

          class JapaneseIterationMarkCharFilterFactory : public ::org::apache::lucene::analysis::CharFilterFactory {
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

            explicit JapaneseIterationMarkCharFilterFactory(jobject obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseIterationMarkCharFilterFactory(const JapaneseIterationMarkCharFilterFactory& obj) : ::org::apache::lucene::analysis::CharFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            JapaneseIterationMarkCharFilterFactory();
            JapaneseIterationMarkCharFilterFactory(const ::java::util::Map &);

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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseIterationMarkCharFilterFactory);
          extern PyTypeObject *PY_TYPE(JapaneseIterationMarkCharFilterFactory);

          class t_JapaneseIterationMarkCharFilterFactory {
          public:
            PyObject_HEAD
            JapaneseIterationMarkCharFilterFactory object;
            static PyObject *wrap_Object(const JapaneseIterationMarkCharFilterFactory&);
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
