#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace store {
        class DataInput;
        class DataOutput;
        class Directory;
      }
      namespace search {
        class BooleanQuery$Builder;
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
        class BooleanQuery;
        class BooleanClause$Occur;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
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

            class AnalyzingInfixSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_a23cdc2340ed50ac,
                mid_init$_6047fb825f6e9454,
                mid_init$_f58a9b9e2e0799bf,
                mid_init$_3968546b677d35ae,
                mid_add_93f3207828da4b58,
                mid_addContextToQuery_667494fe54425f41,
                mid_build_ccfc0be4d7c5ce8c,
                mid_close_3720c61b0679eb3e,
                mid_commit_3720c61b0679eb3e,
                mid_getCount_16939d9d0a9a9721,
                mid_load_cc655a2984ac0be1,
                mid_lookup_ffaa661bc9480cb8,
                mid_lookup_51465de8e2d90cbd,
                mid_lookup_2fb7a4da1831fc59,
                mid_lookup_fc4b9325750abfb8,
                mid_lookup_21dea9664d0b635d,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_refresh_3720c61b0679eb3e,
                mid_store_0269cfd2080fde14,
                mid_update_93f3207828da4b58,
                mid_highlight_8760f097ca642dcf,
                mid_getTextFieldType_2c48559fc9452bd5,
                mid_getLastTokenQuery_171433ef85015467,
                mid_finishQuery_91c2e2c451acdb5f,
                mid_createResults_6e2cd9fbefb52e3d,
                mid_addNonMatch_b8f794889a4eed26,
                mid_addWholeMatch_074ce4651b8e3989,
                mid_addPrefixMatch_890242b398d71df4,
                mid_getDirectory_8c6770f58fa6abf8,
                mid_getIndexWriterConfig_b669c78b963b2423,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingInfixSuggester(const AnalyzingInfixSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jboolean DEFAULT_ALL_TERMS_REQUIRED;
              static jboolean DEFAULT_HIGHLIGHT;
              static jint DEFAULT_MIN_PREFIX_CHARS;

              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean, jboolean, jboolean);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean, jboolean, jboolean, jboolean);

              void add(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
              void addContextToQuery(const ::org::apache::lucene::search::BooleanQuery$Builder &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void close() const;
              void commit() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Map &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
              jlong ramBytesUsed() const;
              void refresh() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
              void update(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
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
            extern PyType_Def PY_TYPE_DEF(AnalyzingInfixSuggester);
            extern PyTypeObject *PY_TYPE(AnalyzingInfixSuggester);

            class t_AnalyzingInfixSuggester {
            public:
              PyObject_HEAD
              AnalyzingInfixSuggester object;
              static PyObject *wrap_Object(const AnalyzingInfixSuggester&);
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
