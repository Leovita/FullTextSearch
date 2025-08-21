#ifndef org_apache_lucene_analysis_pattern_PatternTypingFilter$PatternTypingRule_H
#define org_apache_lucene_analysis_pattern_PatternTypingFilter$PatternTypingRule_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternTypingFilter$PatternTypingRule : public ::java::lang::Record {
           public:
            enum {
              mid_init$_3fde14ddfe2293ac,
              mid_equals_570b5248a6da3ef6,
              mid_flags_20fbf7565993c3d7,
              mid_hashCode_20fbf7565993c3d7,
              mid_pattern_fbba0baa64190115,
              mid_toString_09a7afff1868fc5e,
              mid_typeTemplate_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternTypingFilter$PatternTypingRule(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternTypingFilter$PatternTypingRule(const PatternTypingFilter$PatternTypingRule& obj) : ::java::lang::Record(obj) {}

            PatternTypingFilter$PatternTypingRule(const ::java::util::regex::Pattern &, jint, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            jint flags() const;
            jint hashCode() const;
            ::java::util::regex::Pattern pattern() const;
            ::java::lang::String toString() const;
            ::java::lang::String typeTemplate() const;
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
      namespace analysis {
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternTypingFilter$PatternTypingRule);
          extern PyTypeObject *PY_TYPE(PatternTypingFilter$PatternTypingRule);

          class t_PatternTypingFilter$PatternTypingRule {
          public:
            PyObject_HEAD
            PatternTypingFilter$PatternTypingRule object;
            static PyObject *wrap_Object(const PatternTypingFilter$PatternTypingRule&);
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
