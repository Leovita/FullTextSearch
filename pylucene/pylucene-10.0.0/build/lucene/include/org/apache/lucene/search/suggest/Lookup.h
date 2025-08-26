#ifndef org_apache_lucene_search_suggest_Lookup_H
#define org_apache_lucene_search_suggest_Lookup_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class IOException;
    class OutputStream;
    class InputStream;
  }
  namespace util {
    class Comparator;
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
        class BooleanQuery;
        namespace spell {
          class Dictionary;
        }
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

          class Lookup : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_build_410748db1e584408,
              mid_build_3b81cca33403847f,
              mid_getCount_0f176418e3e16541,
              mid_load_5150f36f2bb2fad6,
              mid_load_bcc888246f25b924,
              mid_lookup_ab31e1c71e0586f4,
              mid_lookup_0b5d66b5da4a3286,
              mid_lookup_69499ac9ec5cc8d4,
              mid_store_357970b8ac2f8d68,
              mid_store_9bc74ef63311a7a4,
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
