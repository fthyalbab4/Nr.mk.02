// rea decompile_all
// name: FUN_0068a6f0
// address: 0x68a6f0
// body: available
// range: 0x68a6f0-0x68a80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68a71a (push 0x68a80c followed by fs-segment stack chaining); handler 0x68a80c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a6f0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 auStackY_1818 [1516];
  undefined4 *puVar4;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 auStack_38 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 auStack_10 [3];

  bVar3 = 0;
  puStack_5c = &stack0xfffffffc;
  auStack_38[3] = 0;
  auStack_38[4] = 0;
  auStack_38[5] = 0;
  auStack_38[6] = 0;
  auStack_38[7] = 0;
  local_18 = 0;
  puStack_60 = &LAB_0068a80c;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  *(undefined1 *)(param_1 + 0x1660) = 0;
  iVar2 = FUN_006588c4(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x1648),
                       *(undefined4 *)(param_1 + 0x164c));
  if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(param_1 + 0x61c) + 0x2f0))) {
    FUN_00689fc4(param_1,iVar2,&local_14);
    while (-1 < iVar2) {
      FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),iVar2,auStack_38 + 3);
      if ((char)local_18 != '\0') break;
      puVar4 = &local_3c;
      FUN_00689fc4(param_1,iVar2,local_4c,puVar4);
      FUN_0068a180(param_1,&local_14,local_4c,puVar4);
      local_14 = local_3c;
      auStack_10[(uint)bVar3 * -2] = auStack_38[(uint)bVar3 * -2];
      auStack_10[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           auStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      (auStack_10 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           (auStack_38 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
      FUN_00658ab0(*(undefined4 *)(param_1 + 0x61c),iVar2);
      FUN_006930cc(*(undefined4 *)(param_1 + 0x630));
      *(undefined1 *)(param_1 + 0x628) = 1;
      iVar2 = FUN_006588c4(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x1648),
                           *(undefined4 *)(param_1 + 0x164c));
    }
    FUN_00690d44(param_1);
    FUN_0068f9f8(param_1);
  }
  puVar1 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_0068a813;
  puStack_60 = (undefined1 *)0x68a80b;
  FUN_00408df4(auStack_38 + 3,&DAT_00656108,puVar1);
  return;
}
