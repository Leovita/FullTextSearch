#ifndef org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H
#define org_apache_lucene_search_suggest_analyzing_FreeTextSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
    class CharSequence;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
    class Set;
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
    }
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
                mid_init$_1aaca852402a5069,
                mid_init$_cd4d6e4fe954a7e9,
                mid_init$_168800d34aed380e,
                mid_init$_b14276e739cafe33,
                mid_build_3b81cca33403847f,
                mid_build_ddb53fd1e6b4cd3b,
                mid_get_53a8d172a6f84f78,
                mid_getChildResources_4a269b968b3a511f,
                mid_getCount_0f176418e3e16541,
                mid_load_bcc888246f25b924,
                mid_lookup_e55ddf73b9430193,
                mid_lookup_ab31e1c71e0586f4,
                mid_lookup_64beff863a92f242,
                mid_lookup_0b5d66b5da4a3286,
                mid_ramBytesUsed_0f176418e3e16541,
                mid_store_9bc74ef63311a7a4,
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
