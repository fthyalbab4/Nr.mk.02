// rea decompile_all
// name: FUN_00550164
// address: 0x550164
// body: available
// range: 0x550164-0x55017f inclusive
// range: 0x5501bc-0x5502c4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550164(undefined4 param_1,ushort param_2,undefined4 param_3)

{
  uint local_10;
  undefined1 local_c;

  switch(param_2) {
  case 0:
    FUN_0040b9d0(PTR_LAB_00689544,param_3);
    break;
  case 1:
    FUN_0040b9d0(PTR_LAB_006890b8,param_3);
    break;
  case 2:
    FUN_0040b9d0(PTR_LAB_00689150,param_3);
    break;
  case 3:
    FUN_0040b9d0(PTR_LAB_00688c50,param_3);
    break;
  case 4:
    FUN_0040b9d0(PTR_LAB_006888b8,param_3);
    break;
  case 5:
    FUN_0040b9d0(PTR_LAB_00688f18,param_3);
    break;
  case 6:
    FUN_0040b9d0(PTR_LAB_00688dc0,param_3);
    break;
  case 7:
    FUN_0040b9d0(PTR_LAB_00689510,param_3);
    break;
  case 8:
    FUN_0040b9d0(PTR_LAB_006895e4,param_3);
    break;
  case 9:
    FUN_0040b9d0(PTR_LAB_00688e1c,param_3);
    break;
  case 10:
    FUN_0040b9d0(PTR_LAB_006890b4,param_3);
    break;
  case 0xb:
    FUN_0040b9d0(PTR_LAB_00688bf4,param_3);
    break;
  case 0xc:
    FUN_0040b9d0(PTR_LAB_00688ca8,param_3);
    break;
  case 0xd:
    FUN_0040b9d0(PTR_LAB_0068964c,param_3);
    break;
  case 0xe:
    FUN_0040b9d0(PTR_LAB_006892ac,param_3);
    break;
  default:
    local_10 = (uint)param_2;
    local_c = 0;
    FUN_00417c88(&PTR_DAT_005502d4,&local_10,0,param_3);
  }
  return;
}
