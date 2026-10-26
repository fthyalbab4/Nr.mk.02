// rea decompile_all
// name: FUN_004cb83c
// address: 0x4cb83c
// body: available
// range: 0x4cb83c-0x4cba70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cb8d7 (push 0x4cba71 followed by fs-segment stack chaining); handler 0x4cba71 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_004cb83c(undefined4 param_1,int *param_2)

{
  HRGN pHVar1;
  HDC pHVar2;
  HBRUSH hbr;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  int aiStackY_183c [1516];
  undefined4 uVar4;
  HGDIOBJ h;
  int w;
  undefined4 uVar5;
  int h_00;
  int local_60;
  undefined1 local_50 [16];
  int local_40;
  int aiStack_3c [7];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  HGDIOBJ local_10;
  HRGN local_c;
  int *local_8;

  bVar3 = 0;
  local_8 = param_2;
  (**(code **)(*param_2 + 0x54))(param_2,&stack0xffffffa0);
  FUN_0040c18c(&stack0xffffffa0,3,local_8[0x13]);
  FUN_0045c2e4(*(undefined4 *)(local_8[0x9c] + 0x48),0xf0ffff);
  (**(code **)(*local_8 + 0x54))(local_8,&stack0xffffffa0);
  (**(code **)(*(int *)local_8[0x9c] + 0x4c))((int *)local_8[0x9c],&stack0xffffffa0);
  pHVar1 = CreateRectRgn(local_20,local_1c,local_18,local_14);
  local_c = pHVar1;
  pHVar2 = (HDC)FUN_0045d4ec(local_8[0x9c]);
  local_10 = SelectObject(pHVar2,pHVar1);
  *in_FS_OFFSET = &stack0xffffff88;
  FUN_0045c2e4(*(undefined4 *)(local_8[0x9c] + 0x48),0);
  h_00 = 1;
  w = 1;
  hbr = (HBRUSH)FUN_0045c344(*(undefined4 *)(local_8[0x9c] + 0x48));
  pHVar1 = local_c;
  pHVar2 = (HDC)FUN_0045d4ec(local_8[0x9c]);
  FrameRgn(pHVar2,pHVar1,hbr,w,h_00);
  if (local_8[0xa1] == 0) {
    aiStack_3c[3] = local_20;
    aiStack_3c[(uint)bVar3 * -2 + 4] = aiStack_3c[(uint)bVar3 * -2 + 8];
    aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5] =
         aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
    (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1] =
         (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
  }
  else {
    FUN_0040c1e8(aiStack_3c + 7,2,aiStack_3c + 3,0,0x3fe00000);
  }
  if (local_8[0xa0] == 0) {
    local_40 = local_20;
    aiStack_3c[(uint)bVar3 * -2] = aiStack_3c[(uint)bVar3 * -2 + 8];
    aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 9];
    (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
         (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 9)[(uint)bVar3 * -2 + 1];
  }
  else {
    FUN_0040c1e8(aiStack_3c + 7,3,&local_40,0,0x3fe00000);
  }
  FUN_0045c464(*(undefined4 *)(local_8[0x9c] + 0x48),1);
  (**(code **)(*(int *)local_8[0x9c] + 0x8c))((int *)local_8[0x9c],local_50,local_8 + 0xa0,2);
  FUN_0040c298(aiStack_3c + 3,local_50,&stack0xffffffa0);
  aiStack_3c[3] = local_60;
  aiStack_3c[(uint)bVar3 * -2 + 4] = *(int *)((int)&stack0xffffffa4 + (uint)bVar3 * 0xfffffffe * 4);
  aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5] =
       aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -7];
  (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 5)[(uint)bVar3 * -2 + 1] =
       (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -7)[(uint)bVar3 * -2 + 1];
  uVar5 = 0x28500;
  (**(code **)(*(int *)local_8[0x9c] + 0x8c))((int *)local_8[0x9c],aiStack_3c + 3,local_8 + 0xa0);
  (**(code **)(*(int *)local_8[0x9c] + 0x8c))((int *)local_8[0x9c],local_50,local_8 + 0xa1,2);
  FUN_0040c298(&local_40,local_50,&stack0xffffffa0);
  local_40 = local_60;
  aiStack_3c[(uint)bVar3 * -2] = *(int *)((int)&stack0xffffffa4 + (uint)bVar3 * 0xfffffffe * 4);
  aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       aiStack_3c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -7];
  (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (aiStack_3c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + -7)[(uint)bVar3 * -2 + 1];
  uVar4 = 0x28500;
  (**(code **)(*(int *)local_8[0x9c] + 0x8c))((int *)local_8[0x9c],&local_40,local_8 + 0xa1);
  *in_FS_OFFSET = uVar4;
  h = local_10;
  pHVar2 = (HDC)FUN_0045d4ec(local_8[0x9c],uVar4,uVar5,local_10,&LAB_004cba78);
  SelectObject(pHVar2,h);
  DeleteObject(local_c);
  return;
}
