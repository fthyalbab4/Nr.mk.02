// rea decompile_all
// name: FUN_00614370
// address: 0x614370
// body: available
// range: 0x614370-0x61448d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61439c (push 0x61448e followed by fs-segment stack chaining); handler 0x61448e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00614370(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 local_3c [56];

  puStack_50 = (undefined1 *)0x614391;
  FUN_00408ff8(local_3c,&DAT_00615fdc);
  puStack_54 = &LAB_0061448e;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_50 = &stack0xfffffffc;
  FUN_006164fc(param_4,*(undefined4 *)(*(int *)(param_2 + 4) + 0x20 + param_3 * 0x28));
  iVar3 = FUN_00614240(param_1,param_2,param_3);
  cVar1 = *PTR_PTR_00688e10;
  puVar5 = param_4;
  puVar2 = puStack_54;
  while ((cVar1 == '\0' && (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0x28) - 0xddU < 2))) {
    puStack_54 = puVar2;
    FUN_00409360(local_3c,param_4,&DAT_00615fdc);
    *param_4 = 0x3f3;
    param_4[10] = 2;
    uVar4 = FUN_004095b8(4,&DAT_00616078);
    param_4[0xb] = uVar4;
    FUN_00409dfc(param_4[0xb],&DAT_00616078,1,2);
    uVar4 = 0x61442d;
    FUN_00409360(*(undefined4 *)param_4[0xb],local_3c,&DAT_00615fdc);
    param_4[1] = *(undefined4 *)(*(int *)(param_2 + 4) + iVar3 * 0x28);
    puVar5 = (undefined4 *)(*(int *)param_4[0xb] + 0x38);
    iVar3 = FUN_00614240(param_1,param_2,iVar3 + 1,uVar4);
    cVar1 = *PTR_PTR_00688e10;
    puVar2 = puStack_54;
  }
  *in_FS_OFFSET = puVar5;
  puStack_54 = &LAB_00614495;
  uStack_58 = 0x61448d;
  FUN_004090d0(local_3c,&DAT_00615fdc,puVar2);
  return;
}
