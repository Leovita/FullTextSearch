#ifndef org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H
#define org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class List;
    class Set;
  }
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class FreeTextSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_07cd0f76cabcf75a,
                mid_init$_bfcdc5314bc06cf6,
                mid_init$_af1fc8c24187a780,
                mid_init$_5374d072c8e59396,
                mid_build_ccfc0be4d7c5ce8c,
                mid_build_eb86792665ba9375,
                mid_get_84780732a28a9438,
                mid_getChildResources_aa58b3beec16cbbd,
                mid_getCount_16939d9d0a9a9721,
                mid_load_cc655a2984ac0be1,
                mid_lookup_6e3326279ac0811d,
                mid_lookup_04c4840b274727cb,
                mid_lookup_ce209eb598d17434,
                mid_lookup_51465de8e2d90cbd,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_store_0269cfd2080fde14,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FreeTextSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FreeTextSuggester(const FreeTextSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jdouble ALPHA;
              static ::java::lang::String *CODEC_NAME;
              static jint DEFAULT_GRAMS;
              static jbyte DEFAULT_SEPARATOR;
              static jint VERSION_CURRENT;
              static jint VERSION_START;

              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint);
              FreeTextSuggester(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jbyte);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &, jdouble) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              jlong ramBytesUsed() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
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
            extern PyType_Def PY_TYPE_DEF(FreeTextSuggester);
            extern PyTypeObject *PY_TYPE(FreeTextSuggester);

            class t_FreeTextSuggester {
            public:
              PyObject_HEAD
              FreeTextSuggester object;
              static PyObject *wrap_Object(const FreeTextSuggester&);
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
