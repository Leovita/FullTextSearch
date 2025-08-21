#ifndef org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class BooleanClause$Occur;
        class BooleanQuery;
        namespace suggest {
          class Lookup$LookupResult;
          namespace analyzing {
            class BlendedInfixSuggester$BlenderType;
          }
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
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
    class Double;
    class CharSequence;
  }
  namespace util {
    class List;
    class Set;
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class BlendedInfixSuggester : public ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester {
             public:
              enum {
                mid_init$_a23cdc2340ed50ac,
                mid_init$_9cd4229f93a4b2bf,
                mid_init$_9397f6823bfcb6cb,
                mid_lookup_51465de8e2d90cbd,
                mid_lookup_2fb7a4da1831fc59,
                mid_lookup_fc4b9325750abfb8,
                mid_lookup_21dea9664d0b635d,
                mid_getTextFieldType_2c48559fc9452bd5,
                mid_createResults_6e2cd9fbefb52e3d,
                mid_calculateCoefficient_788f636887bfcb79,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BlendedInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BlendedInfixSuggester(const BlendedInfixSuggester& obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingInfixSuggester(obj) {}

              static jint DEFAULT_NUM_FACTOR;

              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint, jboolean);
              BlendedInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, const ::org::apache::lucene::search::suggest::analyzing::BlendedInfixSuggester$BlenderType &, jint, const ::java::lang::Double &, jboolean, jboolean, jboolean);

              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Map &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(BlendedInfixSuggester);
            extern PyTypeObject *PY_TYPE(BlendedInfixSuggester);

            class t_BlendedInfixSuggester {
            public:
              PyObject_HEAD
              BlendedInfixSuggester object;
              static PyObject *wrap_Object(const BlendedInfixSuggester&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
