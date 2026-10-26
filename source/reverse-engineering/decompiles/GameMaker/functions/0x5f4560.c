// rea decompile_all
// name: FUN_005f4560
// address: 0x5f4560
// body: available
// range: 0x5f4560-0x5f45a1 inclusive
// range: 0x5f469e-0x5f495b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f457f (push 0x5f495c followed by fs-segment stack chaining); handler 0x5f495c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f4560(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_2c = &LAB_005f495c;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  FUN_00407eb8(param_3,0);
  switch(param_2) {
  case 0x2714:
    FUN_0040b75c(PTR_PTR_0078168c,param_3);
    break;
  case 0x2719:
    FUN_0040b75c(PTR_PTR_00781b4c,param_3);
    break;
  case 0x271d:
    FUN_0040b75c(PTR_PTR_00781f04,param_3);
    break;
  case 0x271e:
    FUN_0040b75c(PTR_PTR_00781c10,param_3);
    break;
  case 0x2726:
    FUN_0040b75c(PTR_PTR_007822f4,param_3);
    break;
  case 0x2728:
    FUN_0040b75c(PTR_PTR_007827f4,param_3);
    break;
  case 0x2733:
    FUN_0040b75c(PTR_PTR_007827f0,param_3);
    break;
  case 0x2734:
    FUN_0040b75c(PTR_PTR_00781a50,param_3);
    break;
  case 0x2735:
    FUN_0040b75c(PTR_PTR_007820e4,param_3);
    break;
  case 0x2736:
    FUN_0040b75c(PTR_PTR_007824f8,param_3);
    break;
  case 0x2737:
    FUN_0040b75c(PTR_PTR_0078216c,param_3);
    break;
  case 0x2738:
    FUN_0040b75c(PTR_PTR_007815f4,param_3);
    break;
  case 0x2739:
    FUN_0040b75c(PTR_PTR_00781954,param_3);
    break;
  case 0x273a:
    FUN_0040b75c(PTR_PTR_0078163c,param_3);
    break;
  case 0x273b:
    FUN_0040b75c(PTR_PTR_00781d78,param_3);
    break;
  case 0x273c:
    FUN_0040b75c(PTR_PTR_00782000,param_3);
    break;
  case 0x273d:
    FUN_0040b75c(PTR_PTR_00782214,param_3);
    break;
  case 0x273e:
    FUN_0040b75c(PTR_PTR_007822d0,param_3);
    break;
  case 0x273f:
    FUN_0040b75c(PTR_PTR_00782058,param_3);
    break;
  case 0x2740:
    FUN_0040b75c(PTR_PTR_007826fc,param_3);
    break;
  case 0x2741:
    FUN_0040b75c(PTR_PTR_00781684,param_3);
    break;
  case 0x2742:
    FUN_0040b75c(PTR_PTR_00781a7c,param_3);
    break;
  case 0x2743:
    FUN_0040b75c(PTR_PTR_007818b0,param_3);
    break;
  case 0x2744:
    FUN_0040b75c(PTR_PTR_00781ba4,param_3);
    break;
  case 0x2745:
    FUN_0040b75c(PTR_PTR_00782718,param_3);
    break;
  case 0x2746:
    FUN_0040b75c(PTR_PTR_007821c0,param_3);
    break;
  case 0x2747:
    FUN_0040b75c(PTR_PTR_007823d0,param_3);
    break;
  case 0x2748:
    FUN_0040b75c(PTR_PTR_00782754,param_3);
    break;
  case 0x2749:
    FUN_0040b75c(PTR_PTR_00781d74,param_3);
    break;
  case 0x274a:
    FUN_0040b75c(PTR_PTR_00781b88,param_3);
    break;
  case 0x274b:
    FUN_0040b75c(PTR_PTR_007824b4,param_3);
    break;
  case 0x274c:
    FUN_0040b75c(PTR_PTR_007822a4,param_3);
    break;
  case 0x274d:
    FUN_0040b75c(PTR_PTR_00781a0c,param_3);
    break;
  case 0x274e:
    FUN_0040b75c(PTR_PTR_00781f58,param_3);
    break;
  case 0x274f:
    FUN_0040b75c(PTR_PTR_00781b84,param_3);
    break;
  case 0x2750:
    FUN_0040b75c(PTR_PTR_007824f4,param_3);
    break;
  case 0x2751:
    FUN_0040b75c(PTR_PTR_00782388,param_3);
    break;
  case 0x2752:
    FUN_0040b75c(PTR_PTR_00782248,param_3);
  }
  FUN_0040b75c(PTR_PTR_007815e0,&local_c);
  local_18 = 0;
  local_14 = *param_3;
  local_10 = 0x11;
  local_1c = param_2;
  FUN_005e1dd0(local_c,&local_1c,1);
  FUN_00407eb8(param_3,local_8);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = (int)&local_8;
  puStack_2c = &LAB_005f4963;
  iStack_30 = 0x5f495b;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
