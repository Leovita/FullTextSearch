#ifndef org_apache_lucene_monitor_QueryTree_H
#define org_apache_lucene_monitor_QueryTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class Term;
      }
      namespace monitor {
        class QueryTree;
        class TermWeightor;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    namespace function {
      class BiConsumer;
      class Function;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class QueryTree : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_advancePhase_9c3aeb3f8504878d,
            mid_anyTerm_fbac04a720c5d535,
            mid_collectTerms_b72e978f1e58c9c6,
            mid_conjunction_322ef3779a1e5fa6,
            mid_disjunction_322ef3779a1e5fa6,
            mid_term_33a5d68f5a36cf52,
            mid_term_cdf200f2df70a8fe,
            mid_term_463e9f87969c4735,
            mid_toString_09a7afff1868fc5e,
            mid_toString_cd8436557ab831f9,
            mid_weight_32caabaad86c508b,
            mid_space_cd8436557ab831f9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryTree(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryTree(const QueryTree& obj) : ::java::lang::Object(obj) {}

          QueryTree();

          jboolean advancePhase(jdouble) const;
          static QueryTree anyTerm(const ::java::lang::String &);
          void collectTerms(const ::java::util::function::BiConsumer &) const;
          static QueryTree conjunction(const ::java::util::List &, const ::org::apache::lucene::monitor::TermWeightor &);
          static QueryTree disjunction(const ::java::util::List &, const ::org::apache::lucene::monitor::TermWeightor &);
          static QueryTree term(const ::org::apache::lucene::index::Term &, jdouble);
          static QueryTree term(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::monitor::TermWeightor &);
          static QueryTree term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, jdouble);
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
          jdouble weight() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(QueryTree);
        extern PyTypeObject *PY_TYPE(QueryTree);

        class t_QueryTree {
        public:
          PyObject_HEAD
          QueryTree object;
          static PyObject *wrap_Object(const QueryTree&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
