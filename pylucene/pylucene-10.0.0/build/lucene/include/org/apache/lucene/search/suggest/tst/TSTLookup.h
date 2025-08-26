#ifndef org_apache_lucene_search_suggest_tst_TSTLookup_H
#define org_apache_lucene_search_suggest_tst_TSTLookup_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class DataInput;
        class DataOutput;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
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
          namespace tst {

            class TSTLookup : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_3c1bd744f99d5223,
                mid_add_01a4b4f4a5c96f56,
                mid_build_3b81cca33403847f,
                mid_get_53a8d172a6f84f78,
                mid_getCount_0f176418e3e16541,
                mid_load_bcc888246f25b924,
                mid_lookup_0b5d66b5da4a3286,
                mid_ramBytesUsed_0f176418e3e16541,
                mid_store_9bc74ef63311a7a4,
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
