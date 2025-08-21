#ifndef org_apache_lucene_search_suggest_fst_FSTCompletionLookup_H
#define org_apache_lucene_search_suggest_fst_FSTCompletionLookup_H

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
        class Directory;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          namespace fst {
            class FSTCompletion;
          }
          class Lookup$LookupResult;
        }
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
    class String;
    class CharSequence;
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
          namespace fst {

            class FSTCompletionLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_init$_4eb5815dfd12ae28,
                mid_init$_d5b0e31ccd71ae0b,
                mid_init$_1a271f9c06dabd04,
                mid_build_ccfc0be4d7c5ce8c,
                mid_get_84780732a28a9438,
                mid_getChildResources_aa58b3beec16cbbd,
                mid_getCount_16939d9d0a9a9721,
                mid_load_cc655a2984ac0be1,
                mid_lookup_51465de8e2d90cbd,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_store_0269cfd2080fde14,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FSTCompletionLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FSTCompletionLookup(const FSTCompletionLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              FSTCompletionLookup();
              FSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
              FSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::fst::FSTCompletion &, jboolean);
              FSTCompletionLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, jint, jboolean);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
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
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(FSTCompletionLookup);
            extern PyTypeObject *PY_TYPE(FSTCompletionLookup);

            class t_FSTCompletionLookup {
            public:
              PyObject_HEAD
              FSTCompletionLookup object;
              static PyObject *wrap_Object(const FSTCompletionLookup&);
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
