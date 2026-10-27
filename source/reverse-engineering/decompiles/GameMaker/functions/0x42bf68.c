// rea decompile_all
// name: FUN_0042bf68
// address: 0x42bf68
// body: available
// range: 0x42bf68-0x42c07a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42bf83 (push 0x42c07b followed by fs-segment stack chaining); handler 0x42c07b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bf68(uint param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  ushort uVar4;

  puStack_20 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0042c07b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar4 = (ushort)param_1;
  uVar3 = uVar4 & 0xfff;
  if (uVar3 < 0x16) {
    puStack_2c = (undefined4 *)0x42bfa4;
    puStack_20 = &stack0xfffffffc;
    FUN_00407eb8(param_2,(&PTR_u_Empty_00773fc0)[uVar3]);
  }
  else if (uVar4 == 0x100) {
    puStack_2c = (undefined4 *)0x42bfbc;
    puStack_20 = &stack0xfffffffc;
    FUN_00407eb8(param_2,L"String");
  }
  else if (uVar4 == 0x102) {
    puStack_2c = (undefined4 *)0x42bfd1;
    puStack_20 = &stack0xfffffffc;
    FUN_00407eb8(param_2,L"UnicodeString");
  }
  else if (uVar4 == 0x101) {
    puStack_2c = (undefined4 *)0x42bfe6;
    puStack_20 = &stack0xfffffffc;
    FUN_00407eb8(param_2,&DAT_0042c0dc);
  }
  else {
    cVar2 = FUN_0042c960(param_1,&local_8);
    if (cVar2 == '\0') {
      FUN_004168d8(uVar3,4,&local_10);
      puStack_2c = (undefined4 *)0x42c03a;
      FUN_0040839c(param_2,*(undefined4 *)PTR_PTR_00782760,local_10);
    }
    else {
      FUN_00405954(*local_8,&local_c);
      FUN_004086a8(local_c,2,0x7fffffff);
      puStack_2c = param_2;
    }
  }
  if ((param_1 & 0x2000) != 0) {
    FUN_0040839c(param_2,L"Array ",*param_2);
  }
  if ((param_1 & 0x4000) != 0) {
    FUN_0040839c(param_2,L"ByRef ",*param_2);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = puStack_2c;
  puStack_24 = &LAB_0042c082;
  uStack_28 = 0x42c07a;
  thunk_FUN_00406e80(&local_10,2,puVar1);
  return;
}
