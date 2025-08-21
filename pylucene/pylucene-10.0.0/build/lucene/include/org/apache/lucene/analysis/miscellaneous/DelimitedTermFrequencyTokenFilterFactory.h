#ifndef org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {
          class DelimitedTermFrequencyTokenFilter;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
        namespace miscellaneous {

          class DelimitedTermFrequencyTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_7b9d408a20310745,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedTermFrequencyTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedTermFrequencyTokenFilterFactory(const DelimitedTermFrequencyTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *DELIMITER_ATTR;
            static ::java::lang::String *NAME;

            DelimitedTermFrequencyTokenFilterFactory();
            DelimitedTermFrequencyTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::DelimitedTermFrequencyTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(DelimitedTermFrequencyTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(DelimitedTermFrequencyTokenFilterFactory);

          class t_DelimitedTermFrequencyTokenFilterFactory {
          public:
            PyObject_HEAD
            DelimitedTermFrequencyTokenFilterFactory object;
            static PyObject *wrap_Object(const DelimitedTermFrequencyTokenFilterFactory&);
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
