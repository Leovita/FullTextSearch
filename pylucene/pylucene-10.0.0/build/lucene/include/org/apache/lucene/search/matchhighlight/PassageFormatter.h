#ifndef org_apache_lucene_search_matchhighlight_PassageFormatter_H
#define org_apache_lucene_search_matchhighlight_PassageFormatter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Function;
    }
    class List;
  }
  namespace lang {
    class Class;
    class StringBuilder;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetRange;
          class Passage;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class PassageFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f29246d136b6952d,
              mid_init$_9e1646df9272970b,
              mid_format_1802e972ececd000,
              mid_format_7459e8d13cdb4d7d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageFormatter(const PassageFormatter& obj) : ::java::lang::Object(obj) {}

            PassageFormatter(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            PassageFormatter(const ::java::lang::String &, const ::java::util::function::Function &, const ::java::util::function::Function &);

            ::java::lang::StringBuilder format(const ::java::lang::StringBuilder &, const ::java::lang::CharSequence &, const ::org::apache::lucene::search::matchhighlight::Passage &) const;
            ::java::util::List format(const ::java::lang::CharSequence &, const ::java::util::List &, const ::java::util::List &) const;
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
      namespace search {
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(PassageFormatter);
          extern PyTypeObject *PY_TYPE(PassageFormatter);

          class t_PassageFormatter {
          public:
            PyObject_HEAD
            PassageFormatter object;
            static PyObject *wrap_Object(const PassageFormatter&);
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
