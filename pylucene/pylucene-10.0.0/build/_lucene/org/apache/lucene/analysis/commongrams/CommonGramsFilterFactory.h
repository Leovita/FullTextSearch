#ifndef org_apache_lucene_analysis_commongrams_CommonGramsFilterFactory_H
#define org_apache_lucene_analysis_commongrams_CommonGramsFilterFactory_H

#include "org/apache/lucene/analysis/en/AbstractWordsFileFilterFactory.h"

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
        class CharArraySet;
        class TokenStream;
        class TokenFilter;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {

          class CommonGramsFilterFactory : public ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_1a59f0bb49337b2d,
              mid_getCommonWords_7a52625961f2f88e,
              mid_createDefaultWords_7a52625961f2f88e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonGramsFilterFactory(jobject obj) : ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonGramsFilterFactory(const CommonGramsFilterFactory& obj) : ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            CommonGramsFilterFactory();
            CommonGramsFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::CharArraySet getCommonWords() const;
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
        namespace commongrams {
          extern PyType_Def PY_TYPE_DEF(CommonGramsFilterFactory);
          extern PyTypeObject *PY_TYPE(CommonGramsFilterFactory);

          class t_CommonGramsFilterFactory {
          public:
            PyObject_HEAD
            CommonGramsFilterFactory object;
            static PyObject *wrap_Object(const CommonGramsFilterFactory&);
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
