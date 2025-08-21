#ifndef org_apache_lucene_search_suggest_Lookup_H
#define org_apache_lucene_search_suggest_Lookup_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace util {
    class List;
    class Set;
    class Comparator;
  }
}
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
        namespace spell {
          class Dictionary;
        }
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
        class BooleanQuery;
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

          class Lookup : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_build_03bbb0c598eef533,
              mid_build_ccfc0be4d7c5ce8c,
              mid_getCount_16939d9d0a9a9721,
              mid_load_77871f5299d2fb29,
              mid_load_cc655a2984ac0be1,
              mid_lookup_04c4840b274727cb,
              mid_lookup_51465de8e2d90cbd,
              mid_lookup_2fb7a4da1831fc59,
              mid_store_85515b48a3b9c57f,
              mid_store_0269cfd2080fde14,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lookup(const Lookup& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *CHARSEQUENCE_COMPARATOR;

            Lookup();

            void build(const ::org::apache::lucene::search::spell::Dictionary &) const;
            void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
            jlong getCount() const;
            jboolean load(const ::java::io::InputStream &) const;
            jboolean load(const ::org::apache::lucene::store::DataInput &) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
            jboolean store(const ::java::io::OutputStream &) const;
            jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
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
      namespace search {
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(Lookup);
          extern PyTypeObject *PY_TYPE(Lookup);

          class t_Lookup {
          public:
            PyObject_HEAD
            Lookup object;
            static PyObject *wrap_Object(const Lookup&);
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
