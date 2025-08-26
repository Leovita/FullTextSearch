#ifndef org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_BlendedInfixSuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"

namespace org {
  namespace apache {
    namespace lucene {
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
      namespace store {
        class Directory;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Double;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Set;
    class List;
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
                mid_init$_0d5e41ccc32bd900,
                mid_init$_e7c4907c0a7da2ba,
                mid_init$_fc11ee2993044a7a,
                mid_lookup_0b5d66b5da4a3286,
                mid_lookup_69499ac9ec5cc8d4,
                mid_lookup_6fbcdb5c4a619b49,
                mid_lookup_3d6ae8859315914b,
                mid_getTextFieldType_1856aa2ed33f6865,
                mid_createResults_33e0f096e9c09495,
                mid_calculateCoefficient_3bb466f769ef1c7f,
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
