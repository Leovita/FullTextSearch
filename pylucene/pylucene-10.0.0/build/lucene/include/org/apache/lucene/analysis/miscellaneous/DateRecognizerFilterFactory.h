#ifndef org_apache_lucene_analysis_miscellaneous_DateRecognizerFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_DateRecognizerFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace text {
    class DateFormat;
  }
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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class DateRecognizerFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2ec4d1726b35d478,
              mid_getDataFormat_308aa6d5a62f1775,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DateRecognizerFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DateRecognizerFilterFactory(const DateRecognizerFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *DATE_PATTERN;
            static ::java::lang::String *LOCALE;
            static ::java::lang::String *NAME;

            DateRecognizerFilterFactory();
            DateRecognizerFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::text::DateFormat getDataFormat(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(DateRecognizerFilterFactory);
          extern PyTypeObject *PY_TYPE(DateRecognizerFilterFactory);

          class t_DateRecognizerFilterFactory {
          public:
            PyObject_HEAD
            DateRecognizerFilterFactory object;
            static PyObject *wrap_Object(const DateRecognizerFilterFactory&);
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
