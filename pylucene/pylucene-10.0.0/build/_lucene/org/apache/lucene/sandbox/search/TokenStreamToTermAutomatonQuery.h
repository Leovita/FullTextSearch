#ifndef org_apache_lucene_sandbox_search_TokenStreamToTermAutomatonQuery_H
#define org_apache_lucene_sandbox_search_TokenStreamToTermAutomatonQuery_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {
          class TermAutomatonQuery;
        }
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class TokenStreamToTermAutomatonQuery : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_setPreservePositionIncrements_b110fc3a58c081ab,
              mid_toQuery_943575705274a9ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TokenStreamToTermAutomatonQuery(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TokenStreamToTermAutomatonQuery(const TokenStreamToTermAutomatonQuery& obj) : ::java::lang::Object(obj) {}

            TokenStreamToTermAutomatonQuery();

            void setPreservePositionIncrements(jboolean) const;
            ::org::apache::lucene::sandbox::search::TermAutomatonQuery toQuery(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(TokenStreamToTermAutomatonQuery);
          extern PyTypeObject *PY_TYPE(TokenStreamToTermAutomatonQuery);

          class t_TokenStreamToTermAutomatonQuery {
          public:
            PyObject_HEAD
            TokenStreamToTermAutomatonQuery object;
            static PyObject *wrap_Object(const TokenStreamToTermAutomatonQuery&);
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
