// rea decompile_all
// name: FUN_0068b250
// address: 0x68b250
// body: available
// range: 0x68b250-0x68b4a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68b28e (push 0x68b4a1 followed by fs-segment stack chaining); handler 0x68b4a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b250(int param_1,char param_2,ushort param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  ushort local_1e;
  int local_1c;
  int local_18;

  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  puStack_60 = (undefined1 *)0x68b283;
  local_1e = param_3;
  FUN_00408d1c(&local_1c,&DAT_00656108);
  puStack_64 = &LAB_0068b4a1;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_60 = &stack0xfffffffc;
  local_24 = FUN_00404878();
  local_28 = FUN_00404878();
  if (param_2 == '\0') {
    if ((((local_1e & 1) == 0) || (*(int *)(param_1 + 0x634) < 0)) || ((local_1e & 4) != 0)) {
      iVar2 = FUN_00658e78(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x638));
      if (iVar2 < 0) goto LAB_0068b477;
      if ((local_1e & 2) == 0) {
        FUN_00689144(param_1,&local_24,&local_28);
      }
      else {
        local_24 = local_24 + *(int *)(param_1 + 0x1640);
        local_28 = local_28 + *(int *)(param_1 + 0x1644);
      }
      FUN_00689fc4(param_1,iVar2,local_38);
      FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),iVar2,&local_1c);
      local_1c = local_24;
      local_18 = local_28;
      FUN_00657610(*(undefined4 *)(param_1 + 0x61c),iVar2,&local_1c);
      FUN_00657b48(*(undefined4 *)(param_1 + 0x61c));
      FUN_00690d44(param_1);
      FUN_0068f9f8(param_1);
      FUN_006930cc(*(undefined4 *)(param_1 + 0x630));
      *(undefined1 *)(param_1 + 0x628) = 1;
    }
    else {
      iVar2 = FUN_00658e78(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x638));
      if ((local_1e & 2) == 0) {
        FUN_00689144(param_1,&local_24,&local_28);
      }
      if (-1 < iVar2) {
        iVar3 = FUN_006588c4(*(undefined4 *)(param_1 + 0x61c),local_24,local_28);
        if (iVar2 == iVar3) goto LAB_0068b477;
      }
      if (*(char *)(param_1 + 0x1658) != '\0') {
        *(int *)(param_1 + 0x1648) = local_24;
        *(int *)(param_1 + 0x164c) = local_28;
        FUN_0068a6f0(param_1,0);
      }
      uVar4 = FUN_006589c8(*(undefined4 *)(param_1 + 0x61c),local_24,local_28,
                           *(undefined4 *)(param_1 + 0x634));
      FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),uVar4,&local_50);
      *(undefined4 *)(param_1 + 0x638) = local_44;
      FUN_00690d44(param_1);
      FUN_0068f9f8(param_1);
      FUN_006930cc(*(undefined4 *)(param_1 + 0x630));
      *(undefined1 *)(param_1 + 0x628) = 1;
    }
  }
  if (param_2 == '\x01') {
    *(int *)(param_1 + 0x1648) = local_24;
    *(int *)(param_1 + 0x164c) = local_28;
    if ((local_1e & 1) == 0) {
      if ((local_1e & 4) != 0) {
        FUN_0068a624(param_1,0);
      }
    }
    else {
      FUN_0068a6f0(param_1,0);
    }
  }
LAB_0068b477:
  puVar1 = puStack_60;
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_0068b4a8;
  puStack_64 = (undefined1 *)0x68b492;
  FUN_00408df4(&local_50,&DAT_00656108,puVar1);
  puStack_64 = (undefined1 *)0x68b4a0;
  FUN_00408df4(&local_1c,&DAT_00656108);
  return;
}
