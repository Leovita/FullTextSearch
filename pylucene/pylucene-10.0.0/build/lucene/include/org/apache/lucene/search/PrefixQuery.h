#ifndef org_apache_lucene_search_PrefixQuery_H
#define org_apache_lucene_search_PrefixQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PrefixQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_ed33f9e055f7213d,
            mid_init$_32dbe860e4e09580,
            mid_equals_00d17418847797d4,
            mid_getPrefix_b549eaec39b02d52,
            mid_hashCode_bd89ce15dad49192,
            mid_toAutomaton_9f3670e6fbfa1ef8,
            mid_toString_fef9c036acf290a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixQuery(const PrefixQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          PrefixQuery(const ::org::apache::lucene::index::Term &);
          PrefixQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getPrefix() const;
          jint hashCode() const;
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &);
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(PrefixQuery);
        extern PyTypeObject *PY_TYPE(PrefixQuery);

        class t_PrefixQuery {
        public:
          PyObject_HEAD
          PrefixQuery object;
          static PyObject *wrap_Object(const PrefixQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
