// rea decompile_all
// name: FUN_004c08a0
// address: 0x4c08a0
// body: available
// range: 0x4c08a0-0x4c0ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c08a0(int param_1,char param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 uStack_30;
  undefined1 local_18 [19];
  char local_5;

  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    local_5 = extraout_DL;
  }
  FUN_00485c5c(param_1,0);
  *(undefined4 *)(param_1 + 0x50) = 0x2100ab;
  FUN_004edce0(param_1,0x96);
  FUN_004edd14(param_1,0x1d);
  FUN_004ed948(param_1,1);
  FUN_00485cc0(param_1,0);
  *(undefined4 *)(param_1 + 0x280) = 0x17;
  *(undefined4 *)(param_1 + 0x284) = 0x16;
  *(undefined1 *)(param_1 + 0x295) = 0;
  *(undefined1 *)(param_1 + 0x296) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  *(undefined1 *)(param_1 + 0x2b2) = 1;
  uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  uVar2 = FUN_0045bf68(&PTR_FUN_004e0850,1);
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  FUN_004ecd38(uVar2,param_1);
  iVar3 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x2b8) = iVar3;
  *(int *)(iVar3 + 0xc) = param_1;
  *(undefined1 **)(iVar3 + 8) = &LAB_004c1fc0;
  iVar3 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x2c0) = iVar3;
  *(int *)(iVar3 + 0xc) = param_1;
  *(undefined1 **)(iVar3 + 8) = &LAB_004c2134;
  iVar3 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x2c8) = iVar3;
  *(int *)(iVar3 + 0xc) = param_1;
  *(undefined1 **)(iVar3 + 8) = &LAB_004c21dc;
  piVar4 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  *(int **)(param_1 + 0x2d4) = piVar4;
  (**(code **)(*piVar4 + 0x44))(piVar4,1);
  (**(code **)(*piVar4 + 0x38))(piVar4,1);
  iVar3 = FUN_00462a64(piVar4);
  FUN_0045bc24(*(undefined4 *)(iVar3 + 0x48),0xff00000f);
  FUN_0040c114(0,0,1,local_18,1);
  puVar5 = local_18;
  piVar4 = (int *)FUN_00462a64(piVar4);
  (**(code **)(*piVar4 + 0x4c))(piVar4,puVar5);
  *(undefined ***)(param_1 + 0xa8) = &PTR_LAB_00485a00;
  FUN_00503a6c();
  uVar1 = FUN_00503b78();
  *(undefined1 *)(param_1 + 0x2b0) = uVar1;
  uVar2 = FUN_00462144(&PTR_FUN_004587d4,1);
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  FUN_004c5038(param_1,0xff000005);
  uVar2 = FUN_0046fa68(0xff00000f,0xffffffe7);
  FUN_004c5010(param_1,uVar2);
  *(undefined4 *)(param_1 + 0x2a4) = 0xefd3c6;
  FUN_004c1c70(param_1,1);
  FUN_004c4fb0(param_1,3);
  FUN_004c5fb8(param_1,1);
  FUN_004c4fe8(param_1,0);
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
  if (local_5 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_30;
  }
  return param_1;
}
