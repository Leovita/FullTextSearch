#ifndef org_apache_lucene_search_Explanation_H
#define org_apache_lucene_search_Explanation_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
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
            mid_equals_570b5248a6da3ef6,
            mid_getDescription_09a7afff1868fc5e,
            mid_getDetails_16645728e1038270,
            mid_getValue_1b3282bb4db06655,
            mid_hashCode_20fbf7565993c3d7,
            mid_isMatch_947277eca0748c4e,
            mid_match_0d4182f390a8e10c,
            mid_match_dbc5c71c0e5751ec,
            mid_noMatch_d2c87714b6703620,
            mid_noMatch_9ebd748679cc2926,
            mid_toString_09a7afff1868fc5e,
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
