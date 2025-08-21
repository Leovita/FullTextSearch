#ifndef org_apache_lucene_search_PhraseQuery$PostingsAndFreq_H
#define org_apache_lucene_search_PhraseQuery$PostingsAndFreq_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class PhraseQuery$PostingsAndFreq;
      }
      namespace index {
        class Term;
        class ImpactsEnum;
        class PostingsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PhraseQuery$PostingsAndFreq : public ::java::lang::Object {
         public:
          enum {
            mid_init$_18df93565475924b,
            mid_init$_f143f561fb79e0f2,
            mid_compareTo_6c3ea2c757fb9fe7,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseQuery$PostingsAndFreq(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery$PostingsAndFreq(const PhraseQuery$PostingsAndFreq& obj) : ::java::lang::Object(obj) {}

          PhraseQuery$PostingsAndFreq(const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::ImpactsEnum &, jint, const JArray< ::org::apache::lucene::index::Term > &);
          PhraseQuery$PostingsAndFreq(const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::ImpactsEnum &, jint, const ::java::util::List &);

          jint compareTo(const PhraseQuery$PostingsAndFreq &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PhraseQuery$PostingsAndFreq);
        extern PyTypeObject *PY_TYPE(PhraseQuery$PostingsAndFreq);

        class t_PhraseQuery$PostingsAndFreq {
        public:
          PyObject_HEAD
          PhraseQuery$PostingsAndFreq object;
          static PyObject *wrap_Object(const PhraseQuery$PostingsAndFreq&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
