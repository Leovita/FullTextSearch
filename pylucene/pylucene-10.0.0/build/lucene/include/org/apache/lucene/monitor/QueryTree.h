#ifndef org_apache_lucene_monitor_QueryTree_H
#define org_apache_lucene_monitor_QueryTree_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Function;
      class BiConsumer;
    }
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class TermWeightor;
        class QueryTree;
      }
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
      }
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
            mid_init$_e7bdbe105ce1bafb,
            mid_advancePhase_38862de998abbf87,
            mid_anyTerm_b015296bd923de86,
            mid_collectTerms_309feadaabdabe33,
            mid_conjunction_8f4976cc6de7103b,
            mid_disjunction_8f4976cc6de7103b,
            mid_term_52ee705bb2f9e37c,
            mid_term_d17a760c37a1d1ec,
            mid_term_1e3c18666618c808,
            mid_toString_e7df854526d67fa3,
            mid_toString_0da8f0b89b1e9a22,
            mid_weight_6fb37e123fed7a1f,
            mid_space_0da8f0b89b1e9a22,
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
