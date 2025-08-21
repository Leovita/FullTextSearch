#ifndef org_apache_lucene_search_suggest_tst_TSTLookup_H
#define org_apache_lucene_search_suggest_tst_TSTLookup_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
        class Directory;
      }
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
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
    class String;
    class CharSequence;
    class Object;
  }
  namespace util {
    class List;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace tst {

            class TSTLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_init$_4eb5815dfd12ae28,
                mid_add_078423050556d2ef,
                mid_build_ccfc0be4d7c5ce8c,
                mid_get_84780732a28a9438,
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

              explicit TSTLookup(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TSTLookup(const TSTLookup& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              TSTLookup();
              TSTLookup(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);

              jboolean add(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
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
          namespace tst {
            extern PyType_Def PY_TYPE_DEF(TSTLookup);
            extern PyTypeObject *PY_TYPE(TSTLookup);

            class t_TSTLookup {
            public:
              PyObject_HEAD
              TSTLookup object;
              static PyObject *wrap_Object(const TSTLookup&);
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
