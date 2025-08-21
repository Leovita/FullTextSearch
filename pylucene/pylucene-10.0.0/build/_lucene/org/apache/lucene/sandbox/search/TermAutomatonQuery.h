#ifndef org_apache_lucene_sandbox_search_TermAutomatonQuery_H
#define org_apache_lucene_sandbox_search_TermAutomatonQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
              mid_init$_0d82408c6e55bc30,
              mid_addAnyTransition_e13cff512ebda969,
              mid_addTransition_3acebe7b78cbedf7,
              mid_addTransition_1733516daba0e385,
              mid_createState_20fbf7565993c3d7,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_finish_3720c61b0679eb3e,
              mid_finish_540b2b23d51b1efd,
              mid_hashCode_20fbf7565993c3d7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_rewrite_aeaa882ae5e96552,
              mid_setAccept_2936d2706a18a684,
              mid_toDot_09a7afff1868fc5e,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
