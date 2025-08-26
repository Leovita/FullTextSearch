#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
        class BooleanQuery;
        class BooleanQuery$Builder;
      }
      namespace store {
        class Directory;
        class DataInput;
        class DataOutput;
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
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class CharSequence;
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

            class AnalyzingInfixSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_0d5e41ccc32bd900,
                mid_init$_f4f2ccc6f95929fb,
                mid_init$_c31d14a57b9f1b2c,
                mid_init$_e40ad15b2dd1127f,
                mid_add_a2b33be47f58b7be,
                mid_addContextToQuery_80207fc039cc7b04,
                mid_build_3b81cca33403847f,
                mid_close_e7bdbe105ce1bafb,
                mid_commit_e7bdbe105ce1bafb,
                mid_getCount_0f176418e3e16541,
                mid_load_bcc888246f25b924,
                mid_lookup_9870600db152a8e4,
                mid_lookup_0b5d66b5da4a3286,
                mid_lookup_69499ac9ec5cc8d4,
                mid_lookup_6fbcdb5c4a619b49,
                mid_lookup_3d6ae8859315914b,
                mid_ramBytesUsed_0f176418e3e16541,
                mid_refresh_e7bdbe105ce1bafb,
                mid_store_9bc74ef63311a7a4,
                mid_update_a2b33be47f58b7be,
                mid_getIndexWriterConfig_8506e478aa870a95,
                mid_getTextFieldType_1856aa2ed33f6865,
                mid_getLastTokenQuery_9b1de8e0d58e515c,
                mid_finishQuery_d5a8402cca43f073,
                mid_createResults_33e0f096e9c09495,
                mid_addNonMatch_7620fb3ac97e2c09,
                mid_addWholeMatch_faf1671838846da2,
                mid_addPrefixMatch_7ba8b433e9611fec,
                mid_highlight_e1f01d2a7e9615f5,
                mid_getDirectory_ab9ca0aec1f0fb15,
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
