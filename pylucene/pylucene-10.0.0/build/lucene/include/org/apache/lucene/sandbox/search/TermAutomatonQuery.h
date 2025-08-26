#ifndef org_apache_lucene_sandbox_search_TermAutomatonQuery_H
#define org_apache_lucene_sandbox_search_TermAutomatonQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace util {
        class Accountable;
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
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class TermAutomatonQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_addAnyTransition_645c25455f5b9b1c,
              mid_addTransition_64820dbac5b8ad33,
              mid_addTransition_41fd4505c63b4c9e,
              mid_createState_bd89ce15dad49192,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_finish_e7bdbe105ce1bafb,
              mid_finish_8226bd0b0fc13dba,
              mid_hashCode_bd89ce15dad49192,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_rewrite_25984111320dbe39,
              mid_setAccept_a0fed0a2cd38e7b1,
              mid_toDot_e7df854526d67fa3,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermAutomatonQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermAutomatonQuery(const TermAutomatonQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            TermAutomatonQuery(const ::java::lang::String &);

            void addAnyTransition(jint, jint) const;
            void addTransition(jint, jint, const ::java::lang::String &) const;
            void addTransition(jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            jint createState() const;
            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            void finish() const;
            void finish(jint) const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
            void setAccept(jint, jboolean) const;
            ::java::lang::String toDot() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(TermAutomatonQuery);
          extern PyTypeObject *PY_TYPE(TermAutomatonQuery);

          class t_TermAutomatonQuery {
          public:
            PyObject_HEAD
            TermAutomatonQuery object;
            static PyObject *wrap_Object(const TermAutomatonQuery&);
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
