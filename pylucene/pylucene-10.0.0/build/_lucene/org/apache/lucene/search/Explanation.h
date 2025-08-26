#ifndef org_apache_lucene_search_Explanation_H
#define org_apache_lucene_search_Explanation_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Explanation : public ::java::lang::Object {
         public:
          enum {
            mid_equals_00d17418847797d4,
            mid_getDescription_e7df854526d67fa3,
            mid_getDetails_8bc8b3f8e5a9bb0a,
            mid_getValue_b9665294ea488d3c,
            mid_hashCode_bd89ce15dad49192,
            mid_isMatch_9aa4f33e82ea333f,
            mid_match_ec3f8deef49c72cc,
            mid_match_975b14b7f3c0efda,
            mid_noMatch_6e51add46b54c768,
            mid_noMatch_1d085e066f60b11e,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Explanation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Explanation(const Explanation& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getDescription() const;
          JArray< Explanation > getDetails() const;
          ::java::lang::Number getValue() const;
          jint hashCode() const;
          jboolean isMatch() const;
          static Explanation match(const ::java::lang::Number &, const ::java::lang::String &, const JArray< Explanation > &);
          static Explanation match(const ::java::lang::Number &, const ::java::lang::String &, const ::java::util::Collection &);
          static Explanation noMatch(const ::java::lang::String &, const JArray< Explanation > &);
          static Explanation noMatch(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Explanation);
        extern PyTypeObject *PY_TYPE(Explanation);

        class t_Explanation {
        public:
          PyObject_HEAD
          Explanation object;
          static PyObject *wrap_Object(const Explanation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
