// rea decompile_all
// name: FUN_004f9978
// address: 0x4f9978
// body: available
// range: 0x4f9978-0x4f9a8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f9993 (push 0x4f9a8d followed by fs-segment stack chaining); handler 0x4f9a8d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9978(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HDC hdc;
  uint uVar4;
  LPCWSTR lpchText;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int aiStackY_1800 [1511];
  undefined1 *puVar6;
  int cchText;
  int *piVar7;
  tagRECT *ptVar8;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_34;
  undefined1 local_30 [12];
  int local_24;
  int aiStack_20 [3];
  tagRECT local_14;

  bVar5 = 0;
  puStack_48 = &stack0xfffffffc;
  local_34 = 0;
  puStack_4c = &LAB_004f9a8d;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  (**(code **)(*param_1 + 0x54))(param_1,&local_14);
  cVar1 = FUN_0041d030(6,0);
  if (cVar1 != '\0') {
    FUN_00503a6c();
    cVar1 = FUN_00503b78();
    if (cVar1 != '\0') {
      local_24 = local_14.left;
      piVar7 = (int *)((int)&local_14 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      aiStack_20[(uint)bVar5 * -2] = *(int *)((int)&local_14 + (uint)bVar5 * -8 + 4);
      aiStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = *piVar7;
      (aiStack_20 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           piVar7[(uint)bVar5 * -2 + 1];
      InflateRect(&local_14,4,4);
      uVar2 = FUN_00503a6c();
      ptVar8 = &local_14;
      piVar7 = &local_24;
      FUN_0050498c(uVar2,2,local_30,piVar7,ptVar8);
      puVar6 = local_30;
      uVar3 = FUN_0045ce2c(param_1[0x9c]);
      FUN_00503d50(uVar2,uVar3,puVar6,piVar7,ptVar8);
      local_14.left = local_24;
      piVar7 = (int *)((int)&local_14 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(int *)((int)&local_14 + (uint)bVar5 * -8 + 4) = aiStack_20[(uint)bVar5 * -2];
      *piVar7 = aiStack_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      piVar7[(uint)bVar5 * -2 + 1] =
           (aiStack_20 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    }
  }
  local_14.left = local_14.left + 2;
  local_14.top = local_14.top + 2;
  FUN_0045b0d0(*(undefined4 *)(param_1[0x9c] + 0x40),
               *(undefined4 *)(*(int *)(*(int *)PTR_DAT_007828e0 + 0x7c) + 0x18));
  hdc = (HDC)FUN_0045ce2c(param_1[0x9c]);
  FUN_004ee6a0(param_1,&local_34);
  uVar2 = local_34;
  uVar4 = FUN_004f1494(param_1);
  uVar4 = uVar4 | 0x810;
  ptVar8 = &local_14;
  cchText = -1;
  lpchText = (LPCWSTR)FUN_00407f44(uVar2);
  DrawTextW(hdc,lpchText,cchText,ptVar8,uVar4);
  puVar6 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004f9a94;
  puStack_4c = (undefined1 *)0x4f9a8c;
  thunk_FUN_00406e5c(&local_34,uStack_50,puVar6);
  return;
}
