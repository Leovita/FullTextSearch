#ifndef org_xml_sax_helpers_DefaultHandler_H
#define org_xml_sax_helpers_DefaultHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {

        class DefaultHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_characters_fc9be2ded8ee801f,
            mid_endDocument_3720c61b0679eb3e,
            mid_endElement_f8f56bd17402e3b3,
            mid_endPrefixMapping_0d82408c6e55bc30,
            mid_ignorableWhitespace_fc9be2ded8ee801f,
            mid_notationDecl_f8f56bd17402e3b3,
            mid_processingInstruction_3d104da0b5c75e64,
            mid_skippedEntity_0d82408c6e55bc30,
            mid_startDocument_3720c61b0679eb3e,
            mid_startPrefixMapping_3d104da0b5c75e64,
            mid_unparsedEntityDecl_1844a8d1593174ec,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DefaultHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DefaultHandler(const DefaultHandler& obj) : ::java::lang::Object(obj) {}

          DefaultHandler();

          void characters(const JArray< jchar > &, jint, jint) const;
          void endDocument() const;
          void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void endPrefixMapping(const ::java::lang::String &) const;
          void ignorableWhitespace(const JArray< jchar > &, jint, jint) const;
          void notationDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void processingInstruction(const ::java::lang::String &, const ::java::lang::String &) const;
          void skippedEntity(const ::java::lang::String &) const;
          void startDocument() const;
          void startPrefixMapping(const ::java::lang::String &, const ::java::lang::String &) const;
          void unparsedEntityDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {
        extern PyType_Def PY_TYPE_DEF(DefaultHandler);
        extern PyTypeObject *PY_TYPE(DefaultHandler);

        class t_DefaultHandler {
        public:
          PyObject_HEAD
          DefaultHandler object;
          static PyObject *wrap_Object(const DefaultHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
