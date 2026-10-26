// rea decompile_all
// name: FUN_00465f5c
// address: 0x465f5c
// body: available
// range: 0x465f5c-0x465ffc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x465f7f (push 0x465ffd followed by fs-segment stack chaining); handler 0x465ffd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465f5c(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;

  puStack_1c = (undefined1 *)0x465f74;
  FUN_00465f44(param_1);
  puStack_20 = &LAB_00465ffd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  for (local_c = *(undefined4 **)(param_1 + 4);
      (local_c != (undefined4 *)0x0 && ((param_2 != local_c[2] || (param_3 != local_c[3]))));
      local_c = (undefined4 *)*local_c) {
  }
  puStack_1c = &stack0xfffffffc;
  if (local_c == (undefined4 *)0x0) {
    puStack_1c = &stack0xfffffffc;
    puVar2 = (undefined4 *)FUN_0040431c(0x10);
    *puVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = FUN_00466010(param_1,param_2,param_3);
    puVar2[1] = uVar3;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00466004;
  puStack_20 = (undefined1 *)0x465ffc;
  FUN_00465f50(param_1,uStack_24,puVar1);
  return;
}
