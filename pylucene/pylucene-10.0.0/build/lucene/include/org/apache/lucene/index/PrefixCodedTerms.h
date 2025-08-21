#ifndef org_apache_lucene_index_PrefixCodedTerms_H
#define org_apache_lucene_index_PrefixCodedTerms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PrefixCodedTerms$TermIterator;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PrefixCodedTerms : public ::java::lang::Object {
         public:
          enum {
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_iterator_a0561dc2bd9791f7,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_setDelGen_8b3d46852b435a94,
            mid_size_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixCodedTerms(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixCodedTerms(const PrefixCodedTerms& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::index::PrefixCodedTerms$TermIterator iterator() const;
          jlong ramBytesUsed() const;
          void setDelGen(jlong) const;
          jlong size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PrefixCodedTerms);
        extern PyTypeObject *PY_TYPE(PrefixCodedTerms);

        class t_PrefixCodedTerms {
        public:
          PyObject_HEAD
          PrefixCodedTerms object;
          static PyObject *wrap_Object(const PrefixCodedTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
